#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beBaseInfoData_register();
void beNDMWLoadIntf2CtrlData_fieldInit();
void *beNDMWLoadIntf2CtrlData_getMeta();
void beNDMWLoadIntf2CtrlData_vtableRead();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void *fn_802B8770();
void fn_803250AC();
extern char lbl_80454BA8[];
extern char lbl_805364B8[];
void beNDMWLoadIntf2CtrlData_register();
void *beNDMWLoadIntf2CtrlData_getMetaCall();
}
extern "C" {
void fn_8033E328(){
 fn_80066188((int)beNDMWLoadIntf2CtrlData_register);
}
void beNDMWLoadIntf2CtrlData_register(){
 fn_803250AC();
 fn_80066204(0,(int)lbl_805364B8,(int)beBaseInfoData_register,(int)fn_802B8770,(int)beNDMWLoadIntf2CtrlData_getMetaCall,(int)lbl_80454BA8,52,(int)beNDMWLoadIntf2CtrlData_vtableRead,(int)beNDMWLoadIntf2CtrlData_fieldInit,0,0);
}
void *beNDMWLoadIntf2CtrlData_getMetaCall(){return beNDMWLoadIntf2CtrlData_getMeta();}
}
#pragma pop
