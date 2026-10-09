#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beNDMWStatusCtrlSendBit_fieldInit();
void *beNDMWStatusCtrlSendBit_getMeta();
void beNDMWStatusCtrlSendBit_vtableRead();
void beNDMWWindowCtrl_register();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_803250AC();
void *fn_8032B8A4();
extern char lbl_80453ADC[];
extern char lbl_804E1E24[];
extern char lbl_80535EE8[];
void beNDMWStatusCtrlSendBit_register();
void *beNDMWStatusCtrlSendBit_getMetaCall();
}
extern "C" {
void fn_80330F40(){
 fn_80066188((int)beNDMWStatusCtrlSendBit_register);
}
void beNDMWStatusCtrlSendBit_register(){
 fn_803250AC();
 fn_80066204(0,(int)lbl_80535EE8,(int)beNDMWWindowCtrl_register,(int)fn_8032B8A4,(int)beNDMWStatusCtrlSendBit_getMetaCall,(int)lbl_80453ADC,100,(int)beNDMWStatusCtrlSendBit_vtableRead,(int)beNDMWStatusCtrlSendBit_fieldInit,0,(int)lbl_804E1E24);
}
void *beNDMWStatusCtrlSendBit_getMetaCall(){return beNDMWStatusCtrlSendBit_getMeta();}
}
#pragma pop
