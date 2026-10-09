#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beMessengerWork_fieldInit();
void *beMessengerWork_getMeta();
void beMessengerWork_vtableRead();
void *fn_800237D0();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void igObject_register();
extern char lbl_8041F720[];
extern char lbl_804D13EC[];
extern char lbl_80534FE4[];
void beMessengerWork_register();
void *beMessengerWork_getMetaCall();
}
extern "C" {
void fn_802CE7A0(){
 fn_80066188((int)beMessengerWork_register);
}
void beMessengerWork_register(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_80534FE4,(int)igObject_register,(int)fn_800237D0,(int)beMessengerWork_getMetaCall,(int)lbl_8041F720,32,(int)beMessengerWork_vtableRead,(int)beMessengerWork_fieldInit,0,(int)lbl_804D13EC);
}
void *beMessengerWork_getMetaCall(){return beMessengerWork_getMeta();}
}
#pragma pop
