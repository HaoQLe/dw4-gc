#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_801AA6DC();
void *fn_801B8D70();
void igGeometry_register();
void igMorphInstance_fieldInit();
void *igMorphInstance_getMeta();
void igMorphInstance_vtableRead();
extern char lbl_804AE9B4[];
extern char igMorphInstance_className[];
extern void *igMorphInstance_meta;
void igMorphInstance_register();
void *igMorphInstance_getMetaCall();
}
extern "C" {
void igMorphInstance_registerNow(){
 meta_registerNow((int)igMorphInstance_register);
}
void igMorphInstance_register(){
 fn_801AA6DC();
 meta_registerClass(0,(int)&igMorphInstance_meta,(int)igGeometry_register,(int)fn_801B8D70,(int)igMorphInstance_getMetaCall,(int)igMorphInstance_className,80,(int)igMorphInstance_vtableRead,(int)igMorphInstance_fieldInit,0,(int)lbl_804AE9B4);
}
void *igMorphInstance_getMetaCall(){return igMorphInstance_getMeta();}
}
#pragma pop
