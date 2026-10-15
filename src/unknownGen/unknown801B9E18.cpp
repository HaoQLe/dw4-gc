#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_801AA6DC();
void *fn_801B8D70();
void igGeometry_register();
void igMorphInstance2_fieldInit();
void *igMorphInstance2_getMeta();
void igMorphInstance2_vtableRead();
extern char igMorphInstance2_dependencies[];
extern char igMorphInstance2_className[];
extern void *igMorphInstance2_meta;
void igMorphInstance2_register();
void *igMorphInstance2_getMetaCall();
}
extern "C" {
void igMorphInstance2_arkRegister(){
 meta_registerNow((int)igMorphInstance2_register);
}
void igMorphInstance2_register(){
 fn_801AA6DC();
 meta_registerClass(0,(int)&igMorphInstance2_meta,(int)igGeometry_register,(int)fn_801B8D70,(int)igMorphInstance2_getMetaCall,(int)igMorphInstance2_className,60,(int)igMorphInstance2_vtableRead,(int)igMorphInstance2_fieldInit,0,(int)igMorphInstance2_dependencies);
}
void *igMorphInstance2_getMetaCall(){return igMorphInstance2_getMeta();}
}
#pragma pop
