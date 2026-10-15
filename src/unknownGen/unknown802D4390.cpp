#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beKeyboardReceiver_fieldInit();
void *beKeyboardReceiver_getMeta();
void beKeyboardReceiver_vtableRead();
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void *fn_8010F4FC();
void fn_802B1AC8();
void igEventReceiver_register();
extern char beKeyboardReceiver_className[];
extern char lbl_804D1A58[];
extern char beKeyboardReceiver_meta[];
void beKeyboardReceiver_register();
void *beKeyboardReceiver_getMetaCall();
}
extern "C" {
void beKeyboardReceiver_registerNow(){
 meta_registerNow((int)beKeyboardReceiver_register);
}
void beKeyboardReceiver_register(){
 fn_802B1AC8();
 meta_registerClass(0,(int)beKeyboardReceiver_meta,(int)igEventReceiver_register,(int)fn_8010F4FC,(int)beKeyboardReceiver_getMetaCall,(int)beKeyboardReceiver_className,12,(int)beKeyboardReceiver_vtableRead,(int)beKeyboardReceiver_fieldInit,0,(int)lbl_804D1A58);
}
void *beKeyboardReceiver_getMetaCall(){return beKeyboardReceiver_getMeta();}
}
#pragma pop
