#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beMessengerDelay_fieldInit();
void *beMessengerDelay_getMeta();
void beMessengerDelay_vtableRead();
void *fn_800237D0();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void igObject_register();
extern char lbl_8041F7E8[];
extern char lbl_804D14A8[];
extern char lbl_80535018[];
void beMessengerDelay_register();
void *beMessengerDelay_getMetaCall();
}
extern "C" {
void fn_802CF244(){
 fn_80066188((int)beMessengerDelay_register);
}
void beMessengerDelay_register(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_80535018,(int)igObject_register,(int)fn_800237D0,(int)beMessengerDelay_getMetaCall,(int)lbl_8041F7E8,48,(int)beMessengerDelay_vtableRead,(int)beMessengerDelay_fieldInit,0,(int)lbl_804D14A8);
}
void *beMessengerDelay_getMetaCall(){return beMessengerDelay_getMeta();}
}
#pragma pop
