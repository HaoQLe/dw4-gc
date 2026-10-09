#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beMatCtrlSearch_fieldInit();
void *beMatCtrlSearch_getMeta();
void beMatCtrlSearch_vtableRead();
void *fn_800237D0();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void igObject_register();
extern char lbl_8041F970[];
extern char lbl_804D16D4[];
extern char lbl_805350A8[];
void beMatCtrlSearch_register();
void *beMatCtrlSearch_getMetaCall();
}
extern "C" {
void fn_802D0B30(){
 fn_80066188((int)beMatCtrlSearch_register);
}
void beMatCtrlSearch_register(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_805350A8,(int)igObject_register,(int)fn_800237D0,(int)beMatCtrlSearch_getMetaCall,(int)lbl_8041F970,28,(int)beMatCtrlSearch_vtableRead,(int)beMatCtrlSearch_fieldInit,0,(int)lbl_804D16D4);
}
void *beMatCtrlSearch_getMetaCall(){return beMatCtrlSearch_getMeta();}
}
#pragma pop
