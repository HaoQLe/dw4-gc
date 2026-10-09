#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beNDMWStatusCtrlBit_fieldInit();
void *beNDMWStatusCtrlBit_getMeta();
void beNDMWStatusCtrlBit_vtableRead();
void beNDMWWindowCtrl_register();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_803250AC();
void *fn_8032B8A4();
extern char lbl_80453AF4[];
extern char lbl_804E1E6C[];
extern char lbl_80535EFC[];
void beNDMWStatusCtrlBit_register();
void *beNDMWStatusCtrlBit_getMetaCall();
}
extern "C" {
void fn_803313C4(){
 fn_80066188((int)beNDMWStatusCtrlBit_register);
}
void beNDMWStatusCtrlBit_register(){
 fn_803250AC();
 fn_80066204(0,(int)lbl_80535EFC,(int)beNDMWWindowCtrl_register,(int)fn_8032B8A4,(int)beNDMWStatusCtrlBit_getMetaCall,(int)lbl_80453AF4,88,(int)beNDMWStatusCtrlBit_vtableRead,(int)beNDMWStatusCtrlBit_fieldInit,0,(int)lbl_804E1E6C);
}
void *beNDMWStatusCtrlBit_getMetaCall(){return beNDMWStatusCtrlBit_getMeta();}
}
#pragma pop
