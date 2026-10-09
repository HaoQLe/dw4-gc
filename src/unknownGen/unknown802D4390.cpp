#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beKeyboardReceiver_fieldInit();
void *beKeyboardReceiver_getMeta();
void beKeyboardReceiver_vtableRead();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void *fn_8010F4FC();
void fn_802B1AC8();
void igEventReceiver_register();
extern char lbl_8041FCAC[];
extern char lbl_804D1A58[];
extern char lbl_805351A0[];
void beKeyboardReceiver_register();
void *beKeyboardReceiver_getMetaCall();
}
extern "C" {
void fn_802D4390(){
 fn_80066188((int)beKeyboardReceiver_register);
}
void beKeyboardReceiver_register(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_805351A0,(int)igEventReceiver_register,(int)fn_8010F4FC,(int)beKeyboardReceiver_getMetaCall,(int)lbl_8041FCAC,12,(int)beKeyboardReceiver_vtableRead,(int)beKeyboardReceiver_fieldInit,0,(int)lbl_804D1A58);
}
void *beKeyboardReceiver_getMetaCall(){return beKeyboardReceiver_getMeta();}
}
#pragma pop
