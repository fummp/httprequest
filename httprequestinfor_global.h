#ifndef HTTPREQUESTINFOR_GLOBAL_H
#define HTTPREQUESTINFOR_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(HTTPREQUESTINFOR_LIBRARY)
#  define HTTPREQUESTINFORSHARED_EXPORT Q_DECL_EXPORT
#else
#  define HTTPREQUESTINFORSHARED_EXPORT Q_DECL_IMPORT
#endif

#endif // HTTPREQUESTINFOR_GLOBAL_H