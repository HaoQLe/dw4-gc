#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beBaseInfoData_register();
void beNDMWLoadIntf2ChrDataSel_fieldInit();
void *beNDMWLoadIntf2ChrDataSel_getMeta();
void beNDMWLoadIntf2ChrDataSel_vtableRead();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void *fn_802B8770();
void fn_803250AC();
extern char lbl_8045490C[];
extern char lbl_804E2D70[];
extern char lbl_805362F8[];
void beNDMWLoadIntf2ChrDataSel_register();
void *beNDMWLoadIntf2ChrDataSel_getMetaCall();
}
extern "C" {
void fn_8033C8A8(){
 fn_80066188((int)beNDMWLoadIntf2ChrDataSel_register);
}
void beNDMWLoadIntf2ChrDataSel_register(){
 fn_803250AC();
 fn_80066204(0,(int)lbl_805362F8,(int)beBaseInfoData_register,(int)fn_802B8770,(int)beNDMWLoadIntf2ChrDataSel_getMetaCall,(int)lbl_8045490C,76,(int)beNDMWLoadIntf2ChrDataSel_vtableRead,(int)beNDMWLoadIntf2ChrDataSel_fieldInit,0,(int)lbl_804E2D70);
}
void *beNDMWLoadIntf2ChrDataSel_getMetaCall(){return beNDMWLoadIntf2ChrDataSel_getMeta();}
}
#pragma pop
