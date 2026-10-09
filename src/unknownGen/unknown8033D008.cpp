#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beBaseInfoData_register();
void beNDMWLoadIntf2Diffselect_fieldInit();
void *beNDMWLoadIntf2Diffselect_getMeta();
void beNDMWLoadIntf2Diffselect_vtableRead();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void *fn_802B8770();
void fn_803250AC();
extern char lbl_804549A8[];
extern char lbl_804E2FFC[];
extern char lbl_805363A0[];
void beNDMWLoadIntf2Diffselect_register();
void *beNDMWLoadIntf2Diffselect_getMetaCall();
}
extern "C" {
void fn_8033D008(){
 fn_80066188((int)beNDMWLoadIntf2Diffselect_register);
}
void beNDMWLoadIntf2Diffselect_register(){
 fn_803250AC();
 fn_80066204(0,(int)lbl_805363A0,(int)beBaseInfoData_register,(int)fn_802B8770,(int)beNDMWLoadIntf2Diffselect_getMetaCall,(int)lbl_804549A8,76,(int)beNDMWLoadIntf2Diffselect_vtableRead,(int)beNDMWLoadIntf2Diffselect_fieldInit,0,(int)lbl_804E2FFC);
}
void *beNDMWLoadIntf2Diffselect_getMetaCall(){return beNDMWLoadIntf2Diffselect_getMeta();}
}
#pragma pop
