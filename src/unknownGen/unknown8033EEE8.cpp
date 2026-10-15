#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beBaseInfoData_register();
void beNDMWLoadCtrl2CommonIntf_fieldInit();
void *beNDMWLoadCtrl2CommonIntf_getMeta();
void beNDMWLoadCtrl2CommonIntf_vtableRead();
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void *fn_802B8770();
void fn_803250AC();
extern char beNDMWLoadCtrl2CommonIntf_className[];
extern char lbl_804E35B8[];
extern char beNDMWLoadCtrl2CommonIntf_meta[];
void beNDMWLoadCtrl2CommonIntf_register();
void *beNDMWLoadCtrl2CommonIntf_getMetaCall();
}
extern "C" {
void beNDMWLoadCtrl2CommonIntf_registerNow(){
 meta_registerNow((int)beNDMWLoadCtrl2CommonIntf_register);
}
void beNDMWLoadCtrl2CommonIntf_register(){
 fn_803250AC();
 meta_registerClass(0,(int)beNDMWLoadCtrl2CommonIntf_meta,(int)beBaseInfoData_register,(int)fn_802B8770,(int)beNDMWLoadCtrl2CommonIntf_getMetaCall,(int)beNDMWLoadCtrl2CommonIntf_className,72,(int)beNDMWLoadCtrl2CommonIntf_vtableRead,(int)beNDMWLoadCtrl2CommonIntf_fieldInit,0,(int)lbl_804E35B8);
}
void *beNDMWLoadCtrl2CommonIntf_getMetaCall(){return beNDMWLoadCtrl2CommonIntf_getMeta();}
}
#pragma pop
