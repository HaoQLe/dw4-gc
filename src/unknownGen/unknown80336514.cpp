#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beBaseInfoManager_register();
void beNDMWSaveCtrl_fieldInit();
void *beNDMWSaveCtrl_getMeta();
void beNDMWSaveCtrl_vtableRead();
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void *fn_802B381C();
void fn_803250AC();
extern char beNDMWSaveCtrl_className[];
extern char beNDMWSaveCtrl_dependencies[];
extern char beNDMWSaveCtrl_meta[];
void beNDMWSaveCtrl_register();
void *beNDMWSaveCtrl_getMetaCall();
}
extern "C" {
void beNDMWSaveCtrl_arkRegister(){
 meta_registerNow((int)beNDMWSaveCtrl_register);
}
void beNDMWSaveCtrl_register(){
 fn_803250AC();
 meta_registerClass(0,(int)beNDMWSaveCtrl_meta,(int)beBaseInfoManager_register,(int)fn_802B381C,(int)beNDMWSaveCtrl_getMetaCall,(int)beNDMWSaveCtrl_className,36,(int)beNDMWSaveCtrl_vtableRead,(int)beNDMWSaveCtrl_fieldInit,0,(int)beNDMWSaveCtrl_dependencies);
}
void *beNDMWSaveCtrl_getMetaCall(){return beNDMWSaveCtrl_getMeta();}
}
#pragma pop
