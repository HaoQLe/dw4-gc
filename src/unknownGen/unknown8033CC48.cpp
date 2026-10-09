#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beBaseInfoData_register();
void beNDMWLoadIntf2SelSlot_fieldInit();
void *beNDMWLoadIntf2SelSlot_getMeta();
void beNDMWLoadIntf2SelSlot_vtableRead();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void *fn_802B8770();
void fn_803250AC();
extern char lbl_80454960[];
extern char lbl_804E2E84[];
extern char lbl_80536340[];
void beNDMWLoadIntf2SelSlot_register();
void *beNDMWLoadIntf2SelSlot_getMetaCall();
}
extern "C" {
void fn_8033CC48(){
 fn_80066188((int)beNDMWLoadIntf2SelSlot_register);
}
void beNDMWLoadIntf2SelSlot_register(){
 fn_803250AC();
 fn_80066204(0,(int)lbl_80536340,(int)beBaseInfoData_register,(int)fn_802B8770,(int)beNDMWLoadIntf2SelSlot_getMetaCall,(int)lbl_80454960,92,(int)beNDMWLoadIntf2SelSlot_vtableRead,(int)beNDMWLoadIntf2SelSlot_fieldInit,0,(int)lbl_804E2E84);
}
void *beNDMWLoadIntf2SelSlot_getMetaCall(){return beNDMWLoadIntf2SelSlot_getMeta();}
}
#pragma pop
