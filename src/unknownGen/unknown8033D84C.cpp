#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beBaseInfoData_register();
void beNDMWLoadIntf2DegiStateCtrl_fieldInit();
void *beNDMWLoadIntf2DegiStateCtrl_getMeta();
void beNDMWLoadIntf2DegiStateCtrl_vtableRead();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void *fn_802B8770();
void fn_803250AC();
extern char lbl_80454AA0[];
extern char lbl_804E32A0[];
extern char lbl_8053644C[];
void beNDMWLoadIntf2DegiStateCtrl_register();
void *beNDMWLoadIntf2DegiStateCtrl_getMetaCall();
}
extern "C" {
void fn_8033D84C(){
 fn_80066188((int)beNDMWLoadIntf2DegiStateCtrl_register);
}
void beNDMWLoadIntf2DegiStateCtrl_register(){
 fn_803250AC();
 fn_80066204(0,(int)lbl_8053644C,(int)beBaseInfoData_register,(int)fn_802B8770,(int)beNDMWLoadIntf2DegiStateCtrl_getMetaCall,(int)lbl_80454AA0,20,(int)beNDMWLoadIntf2DegiStateCtrl_vtableRead,(int)beNDMWLoadIntf2DegiStateCtrl_fieldInit,0,(int)lbl_804E32A0);
}
void *beNDMWLoadIntf2DegiStateCtrl_getMetaCall(){return beNDMWLoadIntf2DegiStateCtrl_getMeta();}
}
#pragma pop
