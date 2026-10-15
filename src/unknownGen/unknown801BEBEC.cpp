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
void igIniShaderFactory_arkRegister(){
 meta_registerNow((int)igIniShaderFactory_register);
}
void igIniShaderFactory_register(){
 fn_801AA6DC();
 meta_registerClass(0,(int)&igIniShaderFactory_meta,(int)igShaderFactory_register,(int)igIniShaderFactory_parentMeta,(int)igIniShaderFactory_getMetaCall,(int)igIniShaderFactory_className,60,(int)igIniShaderFactory_vtableRead,(int)igIniShaderFactory_fieldInit,0,(int)igIniShaderFactory_dependencies);
}
void *igIniShaderFactory_getMetaCall(){return igIniShaderFactory_getMeta();}
void *igIniShaderFactory_parentMeta(){return igShaderFactory_meta;}
}
#pragma pop
