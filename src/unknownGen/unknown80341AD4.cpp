#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beBaseInfoData_register();
void beNDMWLoadIntf2TextOrder_fieldInit();
void *beNDMWLoadIntf2TextOrder_getMeta();
void beNDMWLoadIntf2TextOrder_vtableRead();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void *fn_802B8770();
void fn_803250AC();
extern char lbl_80455088[];
extern char lbl_804E3C2C[];
extern char lbl_805366E8[];
void beNDMWLoadIntf2TextOrder_register();
void *beNDMWLoadIntf2TextOrder_getMetaCall();
}
extern "C" {
void fn_80341AD4(){
 fn_80066188((int)beNDMWLoadIntf2TextOrder_register);
}
void beNDMWLoadIntf2TextOrder_register(){
 fn_803250AC();
 fn_80066204(0,(int)lbl_805366E8,(int)beBaseInfoData_register,(int)fn_802B8770,(int)beNDMWLoadIntf2TextOrder_getMetaCall,(int)lbl_80455088,24,(int)beNDMWLoadIntf2TextOrder_vtableRead,(int)beNDMWLoadIntf2TextOrder_fieldInit,0,(int)lbl_804E3C2C);
}
void *beNDMWLoadIntf2TextOrder_getMetaCall(){return beNDMWLoadIntf2TextOrder_getMeta();}
}
#pragma pop
