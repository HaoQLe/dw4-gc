#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beMessengerDelay_fieldInit();
void *beMessengerDelay_getMeta();
void beMessengerDelay_vtableRead();
void *fn_800237D0();
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void igObject_register();
extern char beMessengerDelay_className[];
extern char lbl_804D14A8[];
extern char beMessengerDelay_meta[];
void beMessengerDelay_register();
void *beMessengerDelay_getMetaCall();
}
extern "C" {
void beMessengerDelay_registerNow(){
 meta_registerNow((int)beMessengerDelay_register);
}
void beMessengerDelay_register(){
 fn_802B1AC8();
 meta_registerClass(0,(int)beMessengerDelay_meta,(int)igObject_register,(int)fn_800237D0,(int)beMessengerDelay_getMetaCall,(int)beMessengerDelay_className,48,(int)beMessengerDelay_vtableRead,(int)beMessengerDelay_fieldInit,0,(int)lbl_804D14A8);
}
void *beMessengerDelay_getMetaCall(){return beMessengerDelay_getMeta();}
}
#pragma pop
