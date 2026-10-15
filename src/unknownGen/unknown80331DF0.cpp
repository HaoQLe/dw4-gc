#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beNDMWStatusCtrlFlag_fieldInit();
void *beNDMWStatusCtrlFlag_getMeta();
void beNDMWStatusCtrlFlag_vtableRead();
void beNDMWWindowCtrl_register();
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_803250AC();
void *fn_8032B8A4();
extern char beNDMWStatusCtrlFlag_className[];
extern char beNDMWStatusCtrlFlag_dependencies[];
extern char beNDMWStatusCtrlFlag_meta[];
void beNDMWStatusCtrlFlag_register();
void *beNDMWStatusCtrlFlag_getMetaCall();
}
extern "C" {
void beNDMWStatusCtrlFlag_arkRegister(){
 meta_registerNow((int)beNDMWStatusCtrlFlag_register);
}
void beNDMWStatusCtrlFlag_register(){
 fn_803250AC();
 meta_registerClass(0,(int)beNDMWStatusCtrlFlag_meta,(int)beNDMWWindowCtrl_register,(int)fn_8032B8A4,(int)beNDMWStatusCtrlFlag_getMetaCall,(int)beNDMWStatusCtrlFlag_className,88,(int)beNDMWStatusCtrlFlag_vtableRead,(int)beNDMWStatusCtrlFlag_fieldInit,0,(int)beNDMWStatusCtrlFlag_dependencies);
}
void *beNDMWStatusCtrlFlag_getMetaCall(){return beNDMWStatusCtrlFlag_getMeta();}
}
#pragma pop
