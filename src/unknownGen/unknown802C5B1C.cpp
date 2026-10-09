#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beModelCtrlSCEffect_fieldInit();
void *beModelCtrlSCEffect_getMeta();
void beModelCtrlSCEffect_vtableRead();
void beModelCtrlSubComBase_register();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void *fn_802C570C();
extern char lbl_8041E9EC[];
extern char lbl_80534C20[];
void beModelCtrlSCEffect_register();
void *beModelCtrlSCEffect_getMetaCall();
}
extern "C" {
void fn_802C5B1C(){
 fn_80066188((int)beModelCtrlSCEffect_register);
}
void beModelCtrlSCEffect_register(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_80534C20,(int)beModelCtrlSubComBase_register,(int)fn_802C570C,(int)beModelCtrlSCEffect_getMetaCall,(int)lbl_8041E9EC,60,(int)beModelCtrlSCEffect_vtableRead,(int)beModelCtrlSCEffect_fieldInit,0,0);
}
void *beModelCtrlSCEffect_getMetaCall(){return beModelCtrlSCEffect_getMeta();}
}
#pragma pop
