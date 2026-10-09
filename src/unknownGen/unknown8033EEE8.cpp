#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beBaseInfoData_register();
void beNDMWLoadCtrl2CommonIntf_fieldInit();
void *beNDMWLoadCtrl2CommonIntf_getMeta();
void beNDMWLoadCtrl2CommonIntf_vtableRead();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void *fn_802B8770();
void fn_803250AC();
extern char lbl_80454C3C[];
extern char lbl_804E35B8[];
extern char lbl_80536520[];
void beNDMWLoadCtrl2CommonIntf_register();
void *beNDMWLoadCtrl2CommonIntf_getMetaCall();
}
extern "C" {
void fn_8033EEE8(){
 fn_80066188((int)beNDMWLoadCtrl2CommonIntf_register);
}
void beNDMWLoadCtrl2CommonIntf_register(){
 fn_803250AC();
 fn_80066204(0,(int)lbl_80536520,(int)beBaseInfoData_register,(int)fn_802B8770,(int)beNDMWLoadCtrl2CommonIntf_getMetaCall,(int)lbl_80454C3C,72,(int)beNDMWLoadCtrl2CommonIntf_vtableRead,(int)beNDMWLoadCtrl2CommonIntf_fieldInit,0,(int)lbl_804E35B8);
}
void *beNDMWLoadCtrl2CommonIntf_getMetaCall(){return beNDMWLoadCtrl2CommonIntf_getMeta();}
}
#pragma pop
