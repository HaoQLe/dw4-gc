#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beBaseInfoData_register();
void beNDMWLoadIntf2TextOrder_fieldInit();
void *beNDMWLoadIntf2TextOrder_getMeta();
void beNDMWLoadIntf2TextOrder_vtableRead();
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void *fn_802B8770();
void fn_803250AC();
extern char beNDMWLoadIntf2TextOrder_className[];
extern char lbl_804E3C2C[];
extern char beNDMWLoadIntf2TextOrder_meta[];
void beNDMWLoadIntf2TextOrder_register();
void *beNDMWLoadIntf2TextOrder_getMetaCall();
}
extern "C" {
void beNDMWLoadIntf2TextOrder_registerNow(){
 meta_registerNow((int)beNDMWLoadIntf2TextOrder_register);
}
void beNDMWLoadIntf2TextOrder_register(){
 fn_803250AC();
 meta_registerClass(0,(int)beNDMWLoadIntf2TextOrder_meta,(int)beBaseInfoData_register,(int)fn_802B8770,(int)beNDMWLoadIntf2TextOrder_getMetaCall,(int)beNDMWLoadIntf2TextOrder_className,24,(int)beNDMWLoadIntf2TextOrder_vtableRead,(int)beNDMWLoadIntf2TextOrder_fieldInit,0,(int)lbl_804E3C2C);
}
void *beNDMWLoadIntf2TextOrder_getMetaCall(){return beNDMWLoadIntf2TextOrder_getMeta();}
}
#pragma pop
