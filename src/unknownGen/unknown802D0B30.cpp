#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beMatCtrlSearch_fieldInit();
void *beMatCtrlSearch_getMeta();
void beMatCtrlSearch_vtableRead();
void *fn_800237D0();
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void igObject_register();
extern char beMatCtrlSearch_className[];
extern char beMatCtrlSearch_dependencies[];
extern char beMatCtrlSearch_meta[];
void beMatCtrlSearch_register();
void *beMatCtrlSearch_getMetaCall();
}
extern "C" {
void beMatCtrlSearch_arkRegister(){
 meta_registerNow((int)beMatCtrlSearch_register);
}
void beMatCtrlSearch_register(){
 fn_802B1AC8();
 meta_registerClass(0,(int)beMatCtrlSearch_meta,(int)igObject_register,(int)fn_800237D0,(int)beMatCtrlSearch_getMetaCall,(int)beMatCtrlSearch_className,28,(int)beMatCtrlSearch_vtableRead,(int)beMatCtrlSearch_fieldInit,0,(int)beMatCtrlSearch_dependencies);
}
void *beMatCtrlSearch_getMetaCall(){return beMatCtrlSearch_getMeta();}
}
#pragma pop
