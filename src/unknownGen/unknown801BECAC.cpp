#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_801AA6DC();
void igIniShaderFactory_fieldInit();
void *igIniShaderFactory_getMeta();
void igIniShaderFactory_vtableRead();
void igShaderFactory_register();
extern char igIniShaderFactory_dependencies[];
extern char igIniShaderFactory_className[];
extern void *igShaderFactory_meta;
extern void *igIniShaderFactory_meta;
void igIniShaderFactory_register();
void *igIniShaderFactory_getMetaCall();
void *igIniShaderFactory_parentMeta();
}
extern "C" {
void *igIniShaderFactory_parentMeta(){return igShaderFactory_meta;}
}
#pragma pop
