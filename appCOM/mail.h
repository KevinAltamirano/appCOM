// mail.h: declaración de Cmail

#pragma once
#include "resource.h"       // Símbolos principales



#include "appCOM_i.h"



#if defined(_WIN32_WCE) && !defined(_CE_DCOM) && !defined(_CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA)
#error "Los objetos COM de un único subproceso no se admiten completamente en la plataforma Windows CE, como por ejemplo la plataforma Windows Mobile, que no incluye la compatibilidad DCOM completa. Defina _CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA para que ATL tenga que admitir la creación de objetos COM de un único subproceso y permitir el uso de sus implementaciones de este tipo de objetos. El modelo de subprocesos del archivo rgs estaba establecido en 'Free' ya que es el único modelo de subprocesos admitido en plataformas que no son Windows CE DCOM."
#endif

using namespace ATL;


// Cmail

class ATL_NO_VTABLE Cmail :
	public CComObjectRootEx<CComSingleThreadModel>,
	public CComCoClass<Cmail, &CLSID_mail>,
	public IDispatchImpl<Imail, &IID_Imail, &LIBID_appCOMLib, /*wMajor =*/ 1, /*wMinor =*/ 0>
{
public:
	Cmail()
	{
	}

DECLARE_REGISTRY_RESOURCEID(IDR_MAIL)


BEGIN_COM_MAP(Cmail)
	COM_INTERFACE_ENTRY(Imail)
	COM_INTERFACE_ENTRY(IDispatch)
END_COM_MAP()



	DECLARE_PROTECT_FINAL_CONSTRUCT()

	HRESULT FinalConstruct()
	{
		return S_OK;
	}

	void FinalRelease()
	{
	}

public:



	STDMETHOD(ObtenerMensajes)(CHAR* Mensajes);
};

OBJECT_ENTRY_AUTO(__uuidof(mail), Cmail)
