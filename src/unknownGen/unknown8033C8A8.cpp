#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beBaseInfoData_register();
void beNDMWLoadIntf2ChrDataSel_fieldInit();
void *beNDMWLoadIntf2ChrDataSel_getMeta();
void beNDMWLoadIntf2ChrDataSel_vtableRead();
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void *fn_802B8770();
void fn_803250AC();
extern char beNDMWLoadIntf2ChrDataSel_className[];
extern char lbl_804E2D70[];
extern char beNDMWLoadIntf2ChrDataSel_meta[];
void beNDMWLoadIntf2ChrDataSel_register();
void *beNDMWLoadIntf2ChrDataSel_getMetaCall();
}
extern "C" {
void beNDMWLoadIntf2ChrDataSel_registerNow(){
 meta_registerNow((int)beNDMWLoadIntf2ChrDataSel_register);
}
void beNDMWLoadIntf2ChrDataSel_register(){
 fn_803250AC();
 meta_registerClass(0,(int)beNDMWLoadIntf2ChrDataSel_meta,(int)beBaseInfoData_register,(int)fn_802B8770,(int)beNDMWLoadIntf2ChrDataSel_getMetaCall,(int)beNDMWLoadIntf2ChrDataSel_className,76,(int)beNDMWLoadIntf2ChrDataSel_vtableRead,(int)beNDMWLoadIntf2ChrDataSel_fieldInit,0,(int)lbl_804E2D70);
}
void *beNDMWLoadIntf2ChrDataSel_getMetaCall(){return beNDMWLoadIntf2ChrDataSel_getMeta();}
}
#pragma pop
