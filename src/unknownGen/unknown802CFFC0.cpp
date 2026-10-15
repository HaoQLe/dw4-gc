#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beMatCtrlInfoWork_fieldInit();
void *beMatCtrlInfoWork_getMeta();
void beMatCtrlInfoWork_vtableRead();
void *fn_800237D0();
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void igObject_register();
extern char beMatCtrlInfoWork_className[];
extern char lbl_804D1648[];
extern char beMatCtrlInfoWork_meta[];
void beMatCtrlInfoWork_register();
void *beMatCtrlInfoWork_getMetaCall();
}
extern "C" {
void beMatCtrlInfoWork_registerNow(){
 meta_registerNow((int)beMatCtrlInfoWork_register);
}
void beMatCtrlInfoWork_register(){
 fn_802B1AC8();
 meta_registerClass(0,(int)beMatCtrlInfoWork_meta,(int)igObject_register,(int)fn_800237D0,(int)beMatCtrlInfoWork_getMetaCall,(int)beMatCtrlInfoWork_className,16,(int)beMatCtrlInfoWork_vtableRead,(int)beMatCtrlInfoWork_fieldInit,0,(int)lbl_804D1648);
}
void *beMatCtrlInfoWork_getMetaCall(){return beMatCtrlInfoWork_getMeta();}
}
#pragma pop
