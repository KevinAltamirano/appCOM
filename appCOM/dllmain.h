// dllmain.h : Declaración de clase de módulo.

class CappCOMModule : public ATL::CAtlDllModuleT< CappCOMModule >
{
public :
	DECLARE_LIBID(LIBID_appCOMLib)
	DECLARE_REGISTRY_APPID_RESOURCEID(IDR_APPCOM, "{A1ED7FE2-9142-4428-85D8-CA8D963752D0}")
};

extern class CappCOMModule _AtlModule;
