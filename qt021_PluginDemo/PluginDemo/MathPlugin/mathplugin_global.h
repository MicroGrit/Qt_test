#ifndef MATHPLUGIN_GLOBAL_H
#define MATHPLUGIN_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(MATHPLUGIN_LIBRARY)
#  define MATHPLUGINSHARED_EXPORT Q_DECL_EXPORT
#else
#  define MATHPLUGINSHARED_EXPORT Q_DECL_IMPORT
#endif

#endif // MATHPLUGIN_GLOBAL_H
