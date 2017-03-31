// dllmain.h : Declaration of module class.

class CServerComModule : public ATL::CAtlDllModuleT< CServerComModule >
{
public :
	DECLARE_LIBID(LIBID_ServerComLib)
	DECLARE_REGISTRY_APPID_RESOURCEID(IDR_SERVERCOM, "{F26F7F5D-362E-431B-AC61-235B8CD41B6C}")
};

extern class CServerComModule _AtlModule;
