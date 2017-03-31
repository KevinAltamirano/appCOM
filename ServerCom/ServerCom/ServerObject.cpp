// ServerObject.cpp : Implementation of CServerObject

#include "stdafx.h"
#include "ServerObject.h"


// CServerObject



STDMETHODIMP CServerObject::ObtenerMensajes(CHAR* Mensajes)
{
	// TODO: Add your implementation code here
	Mensajes = "Hola men este es tu mensaje .i.";
	return S_OK;
}


STDMETHODIMP CServerObject::getMessages()
{
	// TODO: Add your implementation code here
	printf("Hola men, este es tu mensaje .i.");
	return S_OK;
}


STDMETHODIMP CServerObject::ReturnSomething(CHAR* value)
{
	// TODO: Add your implementation code here
	value = strdup("algo chido");
	return S_OK;
}


STDMETHODIMP CServerObject::DevuelveAlgo(BSTR* value)
{
	// TODO: Add your implementation code here
	char val[100] = "la wea fome";
	CComBSTR bstr(val);
	*value = bstr.Detach();
	return S_OK;
}
