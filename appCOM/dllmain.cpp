// dllmain.cpp : Implementación de DllMain.

#include "stdafx.h"
#include "resource.h"
#include "appCOM_i.h"
#include "dllmain.h"

CappCOMModule _AtlModule;

// Punto de entrada del archivo DLL
extern "C" BOOL WINAPI DllMain(HINSTANCE hInstance, DWORD dwReason, LPVOID lpReserved)
{
	hInstance;
	return _AtlModule.DllMain(dwReason, lpReserved); 
}
