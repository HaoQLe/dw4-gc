#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beMessengerWork_fieldInit();
void *beMessengerWork_getMeta();
void beMessengerWork_vtableRead();
void *fn_800237D0();
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void igObject_register();
extern char beMessengerWork_className[];
extern char lbl_804D13EC[];
extern char beMessengerWork_meta[];
void beMessengerWork_register();
void *beMessengerWork_getMetaCall();
}
extern "C" {
void beMessengerWork_registerNow(){
 meta_registerNow((int)beMessengerWork_register);
}
void beMessengerWork_register(){
 fn_802B1AC8();
 meta_registerClass(0,(int)beMessengerWork_meta,(int)igObject_register,(int)fn_800237D0,(int)beMessengerWork_getMetaCall,(int)beMessengerWork_className,32,(int)beMessengerWork_vtableRead,(int)beMessengerWork_fieldInit,0,(int)lbl_804D13EC);
}
void *beMessengerWork_getMetaCall(){return beMessengerWork_getMeta();}
}
#pragma pop
