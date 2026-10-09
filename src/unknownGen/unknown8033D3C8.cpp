#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beBaseInfoData_register();
void beNDMWLoadIntf2DataSelIntf_fieldInit();
void *beNDMWLoadIntf2DataSelIntf_getMeta();
void beNDMWLoadIntf2DataSelIntf_vtableRead();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void *fn_802B8770();
void fn_803250AC();
extern char lbl_80454A0C[];
extern char lbl_804E3114[];
extern char lbl_805363E8[];
void beNDMWLoadIntf2DataSelIntf_register();
void *beNDMWLoadIntf2DataSelIntf_getMetaCall();
}
extern "C" {
void fn_8033D3C8(){
 fn_80066188((int)beNDMWLoadIntf2DataSelIntf_register);
}
void beNDMWLoadIntf2DataSelIntf_register(){
 fn_803250AC();
 fn_80066204(0,(int)lbl_805363E8,(int)beBaseInfoData_register,(int)fn_802B8770,(int)beNDMWLoadIntf2DataSelIntf_getMetaCall,(int)lbl_80454A0C,92,(int)beNDMWLoadIntf2DataSelIntf_vtableRead,(int)beNDMWLoadIntf2DataSelIntf_fieldInit,0,(int)lbl_804E3114);
}
void *beNDMWLoadIntf2DataSelIntf_getMetaCall(){return beNDMWLoadIntf2DataSelIntf_getMeta();}
}
#pragma pop
