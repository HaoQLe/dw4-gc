#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800237D0();
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_801AA6DC();
void igMorphBase_fieldInit();
void *igMorphBase_getMeta();
void igMorphBase_vtableRead();
void igObject_register();
extern char lbl_804AEAC0[];
extern char igMorphBase_className[];
extern void *igMorphBase_meta;
void igMorphBase_register();
void *igMorphBase_getMetaCall();
}
extern "C" {
void igMorphBase_registerNow(){
 meta_registerNow((int)igMorphBase_register);
}
void igMorphBase_register(){
 fn_801AA6DC();
 meta_registerClass(0,(int)&igMorphBase_meta,(int)igObject_register,(int)fn_800237D0,(int)igMorphBase_getMetaCall,(int)igMorphBase_className,60,(int)igMorphBase_vtableRead,(int)igMorphBase_fieldInit,0,(int)lbl_804AEAC0);
}
void *igMorphBase_getMetaCall(){return igMorphBase_getMeta();}
}
#pragma pop
