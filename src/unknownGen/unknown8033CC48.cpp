#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beBaseInfoData_register();
void beNDMWLoadIntf2SelSlot_fieldInit();
void *beNDMWLoadIntf2SelSlot_getMeta();
void beNDMWLoadIntf2SelSlot_vtableRead();
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void *fn_802B8770();
void fn_803250AC();
extern char beNDMWLoadIntf2SelSlot_className[];
extern char beNDMWLoadIntf2SelSlot_dependencies[];
extern char beNDMWLoadIntf2SelSlot_meta[];
void beNDMWLoadIntf2SelSlot_register();
void *beNDMWLoadIntf2SelSlot_getMetaCall();
}
extern "C" {
void beNDMWLoadIntf2SelSlot_arkRegister(){
 meta_registerNow((int)beNDMWLoadIntf2SelSlot_register);
}
void beNDMWLoadIntf2SelSlot_register(){
 fn_803250AC();
 meta_registerClass(0,(int)beNDMWLoadIntf2SelSlot_meta,(int)beBaseInfoData_register,(int)fn_802B8770,(int)beNDMWLoadIntf2SelSlot_getMetaCall,(int)beNDMWLoadIntf2SelSlot_className,92,(int)beNDMWLoadIntf2SelSlot_vtableRead,(int)beNDMWLoadIntf2SelSlot_fieldInit,0,(int)beNDMWLoadIntf2SelSlot_dependencies);
}
void *beNDMWLoadIntf2SelSlot_getMetaCall(){return beNDMWLoadIntf2SelSlot_getMeta();}
}
#pragma pop
