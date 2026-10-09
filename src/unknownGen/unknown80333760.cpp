#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beNDMWListCtrl_register();
void beNDMWStatusCtrlD0_fieldInit();
void *beNDMWStatusCtrlD0_getMeta();
void beNDMWStatusCtrlD0_vtableRead();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_803250AC();
void *fn_8032BD54();
extern char lbl_80453C98[];
extern char lbl_804E1FD8[];
extern char lbl_80535F70[];
void beNDMWStatusCtrlD0_register();
void *beNDMWStatusCtrlD0_getMetaCall();
}
extern "C" {
void fn_80333760(){
 fn_80066188((int)beNDMWStatusCtrlD0_register);
}
void beNDMWStatusCtrlD0_register(){
 fn_803250AC();
 fn_80066204(0,(int)lbl_80535F70,(int)beNDMWListCtrl_register,(int)fn_8032BD54,(int)beNDMWStatusCtrlD0_getMetaCall,(int)lbl_80453C98,116,(int)beNDMWStatusCtrlD0_vtableRead,(int)beNDMWStatusCtrlD0_fieldInit,0,(int)lbl_804E1FD8);
}
void *beNDMWStatusCtrlD0_getMetaCall(){return beNDMWStatusCtrlD0_getMeta();}
}
#pragma pop
