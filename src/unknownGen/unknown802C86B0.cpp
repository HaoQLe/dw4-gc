#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beModelCtrlMoveObject_fieldInit();
void *beModelCtrlMoveObject_getMeta();
void beModelCtrlMoveObject_vtableRead();
void *fn_800237D0();
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void igObject_register();
extern char beModelCtrlMoveObject_className[];
extern char beModelCtrlMoveObject_meta[];
void beModelCtrlMoveObject_register();
void *beModelCtrlMoveObject_getMetaCall();
}
extern "C" {
void beModelCtrlMoveObject_registerNow(){
 meta_registerNow((int)beModelCtrlMoveObject_register);
}
void beModelCtrlMoveObject_register(){
 fn_802B1AC8();
 meta_registerClass(0,(int)beModelCtrlMoveObject_meta,(int)igObject_register,(int)fn_800237D0,(int)beModelCtrlMoveObject_getMetaCall,(int)beModelCtrlMoveObject_className,44,(int)beModelCtrlMoveObject_vtableRead,(int)beModelCtrlMoveObject_fieldInit,0,0);
}
void *beModelCtrlMoveObject_getMetaCall(){return beModelCtrlMoveObject_getMeta();}
}
#pragma pop
