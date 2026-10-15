#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beBaseInfo_register();
void beNDMWLoadCtrl2Info_fieldInit();
void *beNDMWLoadCtrl2Info_getMeta();
void beNDMWLoadCtrl2Info_vtableRead();
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void *fn_802B2E3C();
void fn_803250AC();
extern char beNDMWLoadCtrl2Info_className[];
extern char lbl_804E35A0[];
extern char beNDMWLoadCtrl2Info_meta[];
void beNDMWLoadCtrl2Info_register();
void *beNDMWLoadCtrl2Info_getMetaCall();
}
extern "C" {
void beNDMWLoadCtrl2Info_registerNow(){
 meta_registerNow((int)beNDMWLoadCtrl2Info_register);
}
void beNDMWLoadCtrl2Info_register(){
 fn_803250AC();
 meta_registerClass(0,(int)beNDMWLoadCtrl2Info_meta,(int)beBaseInfo_register,(int)fn_802B2E3C,(int)beNDMWLoadCtrl2Info_getMetaCall,(int)beNDMWLoadCtrl2Info_className,32,(int)beNDMWLoadCtrl2Info_vtableRead,(int)beNDMWLoadCtrl2Info_fieldInit,0,(int)lbl_804E35A0);
}
void *beNDMWLoadCtrl2Info_getMetaCall(){return beNDMWLoadCtrl2Info_getMeta();}
}
#pragma pop
