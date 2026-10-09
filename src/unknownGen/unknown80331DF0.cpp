#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beNDMWStatusCtrlFlag_fieldInit();
void *beNDMWStatusCtrlFlag_getMeta();
void beNDMWStatusCtrlFlag_vtableRead();
void beNDMWWindowCtrl_register();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_803250AC();
void *fn_8032B8A4();
extern char lbl_80453B44[];
extern char lbl_804E1EF4[];
extern char lbl_80535F20[];
void beNDMWStatusCtrlFlag_register();
void *beNDMWStatusCtrlFlag_getMetaCall();
}
extern "C" {
void fn_80331DF0(){
 fn_80066188((int)beNDMWStatusCtrlFlag_register);
}
void beNDMWStatusCtrlFlag_register(){
 fn_803250AC();
 fn_80066204(0,(int)lbl_80535F20,(int)beNDMWWindowCtrl_register,(int)fn_8032B8A4,(int)beNDMWStatusCtrlFlag_getMetaCall,(int)lbl_80453B44,88,(int)beNDMWStatusCtrlFlag_vtableRead,(int)beNDMWStatusCtrlFlag_fieldInit,0,(int)lbl_804E1EF4);
}
void *beNDMWStatusCtrlFlag_getMetaCall(){return beNDMWStatusCtrlFlag_getMeta();}
}
#pragma pop
