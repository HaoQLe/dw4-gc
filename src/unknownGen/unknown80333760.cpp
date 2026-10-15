#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beNDMWListCtrl_register();
void beNDMWStatusCtrlD0_fieldInit();
void *beNDMWStatusCtrlD0_getMeta();
void beNDMWStatusCtrlD0_vtableRead();
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_803250AC();
void *fn_8032BD54();
extern char beNDMWStatusCtrlD0_className[];
extern char beNDMWStatusCtrlD0_dependencies[];
extern char beNDMWStatusCtrlD0_meta[];
void beNDMWStatusCtrlD0_register();
void *beNDMWStatusCtrlD0_getMetaCall();
}
extern "C" {
void beNDMWStatusCtrlD0_arkRegister(){
 meta_registerNow((int)beNDMWStatusCtrlD0_register);
}
void beNDMWStatusCtrlD0_register(){
 fn_803250AC();
 meta_registerClass(0,(int)beNDMWStatusCtrlD0_meta,(int)beNDMWListCtrl_register,(int)fn_8032BD54,(int)beNDMWStatusCtrlD0_getMetaCall,(int)beNDMWStatusCtrlD0_className,116,(int)beNDMWStatusCtrlD0_vtableRead,(int)beNDMWStatusCtrlD0_fieldInit,0,(int)beNDMWStatusCtrlD0_dependencies);
}
void *beNDMWStatusCtrlD0_getMetaCall(){return beNDMWStatusCtrlD0_getMeta();}
}
#pragma pop
