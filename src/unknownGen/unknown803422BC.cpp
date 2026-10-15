#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beBaseInfoManager_register();
void beNDMWLoadCtrl2_fieldInit();
void *beNDMWLoadCtrl2_getMeta();
void beNDMWLoadCtrl2_vtableRead();
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void *fn_802B381C();
void fn_803250AC();
extern char beNDMWLoadCtrl2_className[];
extern char beNDMWLoadCtrl2_dependencies[];
extern char beNDMWLoadCtrl2_meta[];
void beNDMWLoadCtrl2_register();
void *beNDMWLoadCtrl2_getMetaCall();
}
extern "C" {
void beNDMWLoadCtrl2_arkRegister(){
 meta_registerNow((int)beNDMWLoadCtrl2_register);
}
void beNDMWLoadCtrl2_register(){
 fn_803250AC();
 meta_registerClass(0,(int)beNDMWLoadCtrl2_meta,(int)beBaseInfoManager_register,(int)fn_802B381C,(int)beNDMWLoadCtrl2_getMetaCall,(int)beNDMWLoadCtrl2_className,44,(int)beNDMWLoadCtrl2_vtableRead,(int)beNDMWLoadCtrl2_fieldInit,0,(int)beNDMWLoadCtrl2_dependencies);
}
void *beNDMWLoadCtrl2_getMetaCall(){return beNDMWLoadCtrl2_getMeta();}
}
#pragma pop
