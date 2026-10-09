#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_801AA6DC();
void *fn_801B8D70();
void igGeometry_register();
void igMorphInstance_fieldInit();
void *igMorphInstance_getMeta();
void igMorphInstance_vtableRead();
extern char lbl_804AE9B4[];
extern char lbl_804AE9D0[];
extern void *lbl_80564D20;
void igMorphInstance_register();
void *igMorphInstance_getMetaCall();
}
extern "C" {
void fn_801BA458(){
 fn_80066188((int)igMorphInstance_register);
}
void igMorphInstance_register(){
 fn_801AA6DC();
 fn_80066204(0,(int)&lbl_80564D20,(int)igGeometry_register,(int)fn_801B8D70,(int)igMorphInstance_getMetaCall,(int)lbl_804AE9D0,80,(int)igMorphInstance_vtableRead,(int)igMorphInstance_fieldInit,0,(int)lbl_804AE9B4);
}
void *igMorphInstance_getMetaCall(){return igMorphInstance_getMeta();}
}
#pragma pop
