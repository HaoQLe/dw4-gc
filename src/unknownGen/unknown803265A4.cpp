#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beBaseInfoData_register();
void beNDMWTitle2CtrlData_fieldInit();
void *beNDMWTitle2CtrlData_getMeta();
void beNDMWTitle2CtrlData_vtableRead();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void *fn_802B8770();
void fn_803250AC();
extern char lbl_804533DC[];
extern char lbl_80535D00[];
void beNDMWTitle2CtrlData_register();
void *beNDMWTitle2CtrlData_getMetaCall();
}
extern "C" {
void fn_803265A4(){
 fn_80066188((int)beNDMWTitle2CtrlData_register);
}
void beNDMWTitle2CtrlData_register(){
 fn_803250AC();
 fn_80066204(0,(int)lbl_80535D00,(int)beBaseInfoData_register,(int)fn_802B8770,(int)beNDMWTitle2CtrlData_getMetaCall,(int)lbl_804533DC,48,(int)beNDMWTitle2CtrlData_vtableRead,(int)beNDMWTitle2CtrlData_fieldInit,0,0);
}
void *beNDMWTitle2CtrlData_getMetaCall(){return beNDMWTitle2CtrlData_getMeta();}
}
#pragma pop
