#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800237D0();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_801AA6DC();
void igMorphBase_fieldInit();
void *igMorphBase_getMeta();
void igMorphBase_vtableRead();
void igObject_register();
extern char lbl_804AEAC0[];
extern char lbl_804AEADC[];
extern void *lbl_80564D48;
void igMorphBase_register();
void *igMorphBase_getMetaCall();
}
extern "C" {
void fn_801BA980(){
 fn_80066188((int)igMorphBase_register);
}
void igMorphBase_register(){
 fn_801AA6DC();
 fn_80066204(0,(int)&lbl_80564D48,(int)igObject_register,(int)fn_800237D0,(int)igMorphBase_getMetaCall,(int)lbl_804AEADC,60,(int)igMorphBase_vtableRead,(int)igMorphBase_fieldInit,0,(int)lbl_804AEAC0);
}
void *igMorphBase_getMetaCall(){return igMorphBase_getMeta();}
}
#pragma pop
