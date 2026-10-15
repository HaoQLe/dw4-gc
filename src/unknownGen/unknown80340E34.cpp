#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beBaseInfoData_register();
void beNDMWLoadIntf2MesWin_fieldInit();
void *beNDMWLoadIntf2MesWin_getMeta();
void beNDMWLoadIntf2MesWin_vtableRead();
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void *fn_802B8770();
void fn_803250AC();
extern char beNDMWLoadIntf2MesWin_className[];
extern char lbl_804E3A78[];
extern char beNDMWLoadIntf2MesWin_meta[];
void beNDMWLoadIntf2MesWin_register();
void *beNDMWLoadIntf2MesWin_getMetaCall();
}
extern "C" {
void beNDMWLoadIntf2MesWin_registerNow(){
 meta_registerNow((int)beNDMWLoadIntf2MesWin_register);
}
void beNDMWLoadIntf2MesWin_register(){
 fn_803250AC();
 meta_registerClass(0,(int)beNDMWLoadIntf2MesWin_meta,(int)beBaseInfoData_register,(int)fn_802B8770,(int)beNDMWLoadIntf2MesWin_getMetaCall,(int)beNDMWLoadIntf2MesWin_className,64,(int)beNDMWLoadIntf2MesWin_vtableRead,(int)beNDMWLoadIntf2MesWin_fieldInit,0,(int)lbl_804E3A78);
}
void *beNDMWLoadIntf2MesWin_getMetaCall(){return beNDMWLoadIntf2MesWin_getMeta();}
}
#pragma pop
