// mail.cpp: implementación de Cmail

#include "stdafx.h"
#include "mail.h"


// Cmail



STDMETHODIMP Cmail::ObtenerMensajes(CHAR* Mensajes)
{
	// TODO: Add your implementation code here
	if (Mensajes == "Hola") {
		printf("Pasito perron ron ron");
	}
	return S_OK;
}


