#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beModelCtrlMoveObject_fieldInit();
void *beModelCtrlMoveObject_getMeta();
void beModelCtrlMoveObject_vtableRead();
void *fn_800237D0();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void igObject_register();
extern char lbl_8041EF24[];
extern char lbl_80534DC4[];
void beModelCtrlMoveObject_register();
void *beModelCtrlMoveObject_getMetaCall();
}
extern "C" {
void fn_802C86B0(){
 fn_80066188((int)beModelCtrlMoveObject_register);
}
void beModelCtrlMoveObject_register(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_80534DC4,(int)igObject_register,(int)fn_800237D0,(int)beModelCtrlMoveObject_getMetaCall,(int)lbl_8041EF24,44,(int)beModelCtrlMoveObject_vtableRead,(int)beModelCtrlMoveObject_fieldInit,0,0);
}
void *beModelCtrlMoveObject_getMetaCall(){return beModelCtrlMoveObject_getMeta();}
}
#pragma pop
