#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beNDMWStatusCtrlBit_fieldInit();
void *beNDMWStatusCtrlBit_getMeta();
void beNDMWStatusCtrlBit_vtableRead();
void beNDMWWindowCtrl_register();
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_803250AC();
void *fn_8032B8A4();
extern char beNDMWStatusCtrlBit_className[];
extern char beNDMWStatusCtrlBit_dependencies[];
extern char beNDMWStatusCtrlBit_meta[];
void beNDMWStatusCtrlBit_register();
void *beNDMWStatusCtrlBit_getMetaCall();
}
extern "C" {
void beNDMWStatusCtrlBit_arkRegister(){
 meta_registerNow((int)beNDMWStatusCtrlBit_register);
}
void beNDMWStatusCtrlBit_register(){
 fn_803250AC();
 meta_registerClass(0,(int)beNDMWStatusCtrlBit_meta,(int)beNDMWWindowCtrl_register,(int)fn_8032B8A4,(int)beNDMWStatusCtrlBit_getMetaCall,(int)beNDMWStatusCtrlBit_className,88,(int)beNDMWStatusCtrlBit_vtableRead,(int)beNDMWStatusCtrlBit_fieldInit,0,(int)beNDMWStatusCtrlBit_dependencies);
}
void *beNDMWStatusCtrlBit_getMetaCall(){return beNDMWStatusCtrlBit_getMeta();}
}
#pragma pop
