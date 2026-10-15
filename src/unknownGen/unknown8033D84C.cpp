#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beBaseInfoData_register();
void beNDMWLoadIntf2DegiStateCtrl_fieldInit();
void *beNDMWLoadIntf2DegiStateCtrl_getMeta();
void beNDMWLoadIntf2DegiStateCtrl_vtableRead();
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void *fn_802B8770();
void fn_803250AC();
extern char beNDMWLoadIntf2DegiStateCtrl_className[];
extern char beNDMWLoadIntf2DegiStateCtrl_dependencies[];
extern char beNDMWLoadIntf2DegiStateCtrl_meta[];
void beNDMWLoadIntf2DegiStateCtrl_register();
void *beNDMWLoadIntf2DegiStateCtrl_getMetaCall();
}
extern "C" {
void beNDMWLoadIntf2DegiStateCtrl_arkRegister(){
 meta_registerNow((int)beNDMWLoadIntf2DegiStateCtrl_register);
}
void beNDMWLoadIntf2DegiStateCtrl_register(){
 fn_803250AC();
 meta_registerClass(0,(int)beNDMWLoadIntf2DegiStateCtrl_meta,(int)beBaseInfoData_register,(int)fn_802B8770,(int)beNDMWLoadIntf2DegiStateCtrl_getMetaCall,(int)beNDMWLoadIntf2DegiStateCtrl_className,20,(int)beNDMWLoadIntf2DegiStateCtrl_vtableRead,(int)beNDMWLoadIntf2DegiStateCtrl_fieldInit,0,(int)beNDMWLoadIntf2DegiStateCtrl_dependencies);
}
void *beNDMWLoadIntf2DegiStateCtrl_getMetaCall(){return beNDMWLoadIntf2DegiStateCtrl_getMeta();}
}
#pragma pop
