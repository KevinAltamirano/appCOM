// appCOM.cpp: implementación de exportaciones de archivo DLL.


#include "stdafx.h"
#include "resource.h"
#include "appCOM_i.h"
#include "dllmain.h"


using namespace ATL;

// Se usa para determinar si OLE puede descargar el archivo DLL.
STDAPI DllCanUnloadNow(void)
{
			return _AtlModule.DllCanUnloadNow();
	}

// Devuelve un generador de clases para crear un objeto del tipo solicitado.
_Check_return_
STDAPI DllGetClassObject(_In_ REFCLSID rclsid, _In_ REFIID riid, _Outptr_ LPVOID* ppv)
{
		return _AtlModule.DllGetClassObject(rclsid, riid, ppv);
}

// DllRegisterServer: agrega entradas al Registro del sistema.
STDAPI DllRegisterServer(void)
{
	// registra el objeto, la biblioteca de tipos y las interfaces en typelib
	HRESULT hr = _AtlModule.DllRegisterServer();
		return hr;
}

// DllUnregisterServer: quita entradas del Registro del sistema.
STDAPI DllUnregisterServer(void)
{
	HRESULT hr = _AtlModule.DllUnregisterServer();
		return hr;
}

// DllInstall: agrega o quita entradas del Registro del sistema por usuario por máquina.
STDAPI DllInstall(BOOL bInstall, _In_opt_  LPCWSTR pszCmdLine)
{
	HRESULT hr = E_FAIL;
	static const wchar_t szUserSwitch[] = L"user";

	if (pszCmdLine != NULL)
	{
		if (_wcsnicmp(pszCmdLine, szUserSwitch, _countof(szUserSwitch)) == 0)
		{
			ATL::AtlSetPerUserRegistration(true);
		}
	}

	if (bInstall)
	{	
		hr = DllRegisterServer();
		if (FAILED(hr))
		{
			DllUnregisterServer();
		}
	}
	else
	{
		hr = DllUnregisterServer();
	}

	return hr;
}


