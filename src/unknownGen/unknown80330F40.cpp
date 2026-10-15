#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beNDMWStatusCtrlSendBit_fieldInit();
void *beNDMWStatusCtrlSendBit_getMeta();
void beNDMWStatusCtrlSendBit_vtableRead();
void beNDMWWindowCtrl_register();
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_803250AC();
void *fn_8032B8A4();
extern char beNDMWStatusCtrlSendBit_className[];
extern char lbl_804E1E24[];
extern char beNDMWStatusCtrlSendBit_meta[];
void beNDMWStatusCtrlSendBit_register();
void *beNDMWStatusCtrlSendBit_getMetaCall();
}
extern "C" {
void beNDMWStatusCtrlSendBit_registerNow(){
 meta_registerNow((int)beNDMWStatusCtrlSendBit_register);
}
void beNDMWStatusCtrlSendBit_register(){
 fn_803250AC();
 meta_registerClass(0,(int)beNDMWStatusCtrlSendBit_meta,(int)beNDMWWindowCtrl_register,(int)fn_8032B8A4,(int)beNDMWStatusCtrlSendBit_getMetaCall,(int)beNDMWStatusCtrlSendBit_className,100,(int)beNDMWStatusCtrlSendBit_vtableRead,(int)beNDMWStatusCtrlSendBit_fieldInit,0,(int)lbl_804E1E24);
}
void *beNDMWStatusCtrlSendBit_getMetaCall(){return beNDMWStatusCtrlSendBit_getMeta();}
}
#pragma pop
