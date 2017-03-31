========================================================================
    ACTIVE TEMPLATE LIBRARY: appCOM Información general del proyecto
========================================================================

AppWizard ha creado este proyecto appCOM para que lo use como punto de partida para escribir su biblioteca de vínculos dinámicos (DLL).

Este archivo contiene un resumen de lo que encontrará en cada uno de los archivos que constituyen el proyecto.

appCOM.vcxproj
    Éste es el archivo de proyecto principal para los proyectos de VC++ generados mediante un Asistente para aplicaciones. Contiene información acerca de la versión de Visual C++ con la que se generó el archivo, así como información acerca de las plataformas, configuraciones y características del proyecto seleccionadas en el Asistente para aplicaciones.

appCOM.vcxproj.filters
    Éste es el archivo de filtros para los proyectos de VC++ generados mediante un asistente para aplicaciones. Contiene información acerca de la asociación entre los archivos del proyecto y los filtros. Esta asociación se usa en el IDE para mostrar la agrupación de archivos con extensiones similares bajo un nodo específico (por ejemplo, los archivos ".cpp" se asocian con el filtro"Archivos de código fuente").

appCOM.idl
    Este archivo contiene las definiciones IDL de la biblioteca de tipos, las interfaces y las coclases definidas en el proyecto.
    El compilador MIDL procesará este archivo para generar:
        Definiciones de la interfaz de C++ y declaraciones GUID (appCOM.h)
        Definiciones de GUID                                (appCOM_i.c)
        Una biblioteca de tipos                                  (appCOM.tlb)
        Código de cálculo de referencias                                 (appCOM_p.c y dlldata.c)

appCOM.h
    Este archivo contiene las definiciones de la interfaz de C++ y las declaraciones GUID de los elementos definidos en appCOM.idl. MIDL vuelve a generar este archivo durante la compilación.

appCOM.cpp
    Este archivo contiene el mapa de objetos y la implementación de las exportaciones de los archivos DLL.

appCOM.rc
    Esta es una lista de todos los recursos de Microsoft Windows que usa el programa.

appCOM.def
    Este archivo de definición de módulo proporciona al vinculador información acerca de las exportaciones necesarias para el archivo DLL. Contiene exportaciones para:
        DllGetClassObject
        DllCanUnloadNow
        DllRegisterServer
        DllUnregisterServer
        DllInstall

/////////////////////////////////////////////////////////////////////////////
Otros archivos estándar:

StdAfx.h, StdAfx.cpp
    Estos archivos se usan para compilar un archivo de encabezado precompilado (PCH) denominado appCOM.pch y un archivo de tipos precompilados llamado StdAfx.obj.

Resource.h
    Éste es el archivo de encabezado estándar que define identificadores de recurso.

/////////////////////////////////////////////////////////////////////////////
Proyecto DLL del proxy o código auxiliar y archivo de definición de módulo:

appCOMps.vcxproj
    Éste es el archivo de proyecto para compilar el archivo DLL del proxy o código auxiliar si es necesario.
	El archivo IDL del proyecto principal debe contener al menos una interfaz y se debe compilar primero este archivo antes de compilar el archivo DLL del proxy o código auxiliar.
	Este proceso genera dlldata.c, appCOM_i.c y appCOM_p.c, que son necesarios para compilar el archivo DLL del proxy o código auxiliar.

appCOMps.vcxproj.filters
    Éste es el archivo de filtros para el proyecto proxy/stub. Contiene información acerca de la asociación entre los archivos del proyecto y los filtros. Esta asociación se usa en el IDE para mostrar la agrupación de archivos con extensiones similares bajo un nodo específico (por ejemplo, los archivos ".cpp" se asocian con el filtro"Archivos de código fuente").

appCOMps.def
    Este archivo de definición de módulo proporciona al vinculador información acerca de las exportaciones necesarias para el proxy o código auxiliar.

/////////////////////////////////////////////////////////////////////////////
