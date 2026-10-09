#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beBaseInfoData_register();
void beNDMWLoadCtrl2CtrlData_fieldInit();
void *beNDMWLoadCtrl2CtrlData_getMeta();
void beNDMWLoadCtrl2CtrlData_vtableRead();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void *fn_802B8770();
void fn_803250AC();
extern char lbl_804550B8[];
extern char lbl_805366F8[];
void beNDMWLoadCtrl2CtrlData_register();
void *beNDMWLoadCtrl2CtrlData_getMetaCall();
}
extern "C" {
void fn_80341E34(){
 fn_80066188((int)beNDMWLoadCtrl2CtrlData_register);
}
void beNDMWLoadCtrl2CtrlData_register(){
 fn_803250AC();
 fn_80066204(0,(int)lbl_805366F8,(int)beBaseInfoData_register,(int)fn_802B8770,(int)beNDMWLoadCtrl2CtrlData_getMetaCall,(int)lbl_804550B8,36,(int)beNDMWLoadCtrl2CtrlData_vtableRead,(int)beNDMWLoadCtrl2CtrlData_fieldInit,0,0);
}
void *beNDMWLoadCtrl2CtrlData_getMetaCall(){return beNDMWLoadCtrl2CtrlData_getMeta();}
}
#pragma pop
