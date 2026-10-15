#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beBaseInfoData_register();
void beNDMWLoadIntf2CtrlData_fieldInit();
void *beNDMWLoadIntf2CtrlData_getMeta();
void beNDMWLoadIntf2CtrlData_vtableRead();
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void *fn_802B8770();
void fn_803250AC();
extern char beNDMWLoadIntf2CtrlData_className[];
extern char beNDMWLoadIntf2CtrlData_meta[];
void beNDMWLoadIntf2CtrlData_register();
void *beNDMWLoadIntf2CtrlData_getMetaCall();
}
extern "C" {
void beNDMWLoadIntf2CtrlData_arkRegister(){
 meta_registerNow((int)beNDMWLoadIntf2CtrlData_register);
}
void beNDMWLoadIntf2CtrlData_register(){
 fn_803250AC();
 meta_registerClass(0,(int)beNDMWLoadIntf2CtrlData_meta,(int)beBaseInfoData_register,(int)fn_802B8770,(int)beNDMWLoadIntf2CtrlData_getMetaCall,(int)beNDMWLoadIntf2CtrlData_className,52,(int)beNDMWLoadIntf2CtrlData_vtableRead,(int)beNDMWLoadIntf2CtrlData_fieldInit,0,0);
}
void *beNDMWLoadIntf2CtrlData_getMetaCall(){return beNDMWLoadIntf2CtrlData_getMeta();}
}
#pragma pop
