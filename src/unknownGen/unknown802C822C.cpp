#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beModelCtrlInfoHitBody_fieldInit();
void *beModelCtrlInfoHitBody_getMeta();
void beModelCtrlInfoHitBody_vtableRead();
void *fn_800237D0();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void igObject_register();
extern char lbl_8041EEA0[];
extern char lbl_804D0BD4[];
extern char lbl_80534DA0[];
void beModelCtrlInfoHitBody_register();
void *beModelCtrlInfoHitBody_getMetaCall();
}
extern "C" {
void fn_802C822C(){
 fn_80066188((int)beModelCtrlInfoHitBody_register);
}
void beModelCtrlInfoHitBody_register(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_80534DA0,(int)igObject_register,(int)fn_800237D0,(int)beModelCtrlInfoHitBody_getMetaCall,(int)lbl_8041EEA0,48,(int)beModelCtrlInfoHitBody_vtableRead,(int)beModelCtrlInfoHitBody_fieldInit,0,(int)lbl_804D0BD4);
}
void *beModelCtrlInfoHitBody_getMetaCall(){return beModelCtrlInfoHitBody_getMeta();}
}
#pragma pop
