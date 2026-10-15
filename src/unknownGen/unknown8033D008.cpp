#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beBaseInfoData_register();
void beNDMWLoadIntf2Diffselect_fieldInit();
void *beNDMWLoadIntf2Diffselect_getMeta();
void beNDMWLoadIntf2Diffselect_vtableRead();
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void *fn_802B8770();
void fn_803250AC();
extern char beNDMWLoadIntf2Diffselect_className[];
extern char lbl_804E2FFC[];
extern char beNDMWLoadIntf2Diffselect_meta[];
void beNDMWLoadIntf2Diffselect_register();
void *beNDMWLoadIntf2Diffselect_getMetaCall();
}
extern "C" {
void beNDMWLoadIntf2Diffselect_registerNow(){
 meta_registerNow((int)beNDMWLoadIntf2Diffselect_register);
}
void beNDMWLoadIntf2Diffselect_register(){
 fn_803250AC();
 meta_registerClass(0,(int)beNDMWLoadIntf2Diffselect_meta,(int)beBaseInfoData_register,(int)fn_802B8770,(int)beNDMWLoadIntf2Diffselect_getMetaCall,(int)beNDMWLoadIntf2Diffselect_className,76,(int)beNDMWLoadIntf2Diffselect_vtableRead,(int)beNDMWLoadIntf2Diffselect_fieldInit,0,(int)lbl_804E2FFC);
}
void *beNDMWLoadIntf2Diffselect_getMetaCall(){return beNDMWLoadIntf2Diffselect_getMeta();}
}
#pragma pop
