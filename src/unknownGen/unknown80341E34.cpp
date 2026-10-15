#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beBaseInfoData_register();
void beNDMWLoadCtrl2CtrlData_fieldInit();
void *beNDMWLoadCtrl2CtrlData_getMeta();
void beNDMWLoadCtrl2CtrlData_vtableRead();
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void *fn_802B8770();
void fn_803250AC();
extern char beNDMWLoadCtrl2CtrlData_className[];
extern char beNDMWLoadCtrl2CtrlData_meta[];
void beNDMWLoadCtrl2CtrlData_register();
void *beNDMWLoadCtrl2CtrlData_getMetaCall();
}
extern "C" {
void beNDMWLoadCtrl2CtrlData_registerNow(){
 meta_registerNow((int)beNDMWLoadCtrl2CtrlData_register);
}
void beNDMWLoadCtrl2CtrlData_register(){
 fn_803250AC();
 meta_registerClass(0,(int)beNDMWLoadCtrl2CtrlData_meta,(int)beBaseInfoData_register,(int)fn_802B8770,(int)beNDMWLoadCtrl2CtrlData_getMetaCall,(int)beNDMWLoadCtrl2CtrlData_className,36,(int)beNDMWLoadCtrl2CtrlData_vtableRead,(int)beNDMWLoadCtrl2CtrlData_fieldInit,0,0);
}
void *beNDMWLoadCtrl2CtrlData_getMetaCall(){return beNDMWLoadCtrl2CtrlData_getMeta();}
}
#pragma pop
