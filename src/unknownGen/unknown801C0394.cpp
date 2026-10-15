#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_801AA6DC();
void *fn_801B623C();
void *fn_801C0564();
void igAttrSet_register();
void igGeometry_fieldInit();
void *igGeometry_getMeta();
void igGeometry_vtableRead();
extern char igGeometry_className[];
extern char igGeometry_dependencies[8];
extern void *igGeometry_meta;
void igGeometry_register();
void *igGeometry_getMetaCall();
}
extern "C" {
void igGeometry_arkRegister(){
 meta_registerNow((int)igGeometry_register);
}
void igGeometry_register(){
 fn_801AA6DC();
 meta_registerClass(0,(int)&igGeometry_meta,(int)igAttrSet_register,(int)fn_801B623C,(int)igGeometry_getMetaCall,(int)igGeometry_className,44,(int)igGeometry_vtableRead,(int)igGeometry_fieldInit,(int)fn_801C0564,(int)igGeometry_dependencies);
}
void *igGeometry_getMetaCall(){return igGeometry_getMeta();}
}
#pragma pop
