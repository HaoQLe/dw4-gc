#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beBaseInfoData_register();
void beNDMWSaveIntfComMdlCtrl_fieldInit();
void *beNDMWSaveIntfComMdlCtrl_getMeta();
void beNDMWSaveIntfComMdlCtrl_vtableRead();
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void *fn_802B8770();
void fn_803250AC();
extern char beNDMWSaveIntfComMdlCtrl_className[];
extern char beNDMWSaveIntfComMdlCtrl_dependencies[];
extern char beNDMWSaveIntfComMdlCtrl_meta[];
void beNDMWSaveIntfComMdlCtrl_register();
void *beNDMWSaveIntfComMdlCtrl_getMetaCall();
}
extern "C" {
void beNDMWSaveIntfComMdlCtrl_arkRegister(){
 meta_registerNow((int)beNDMWSaveIntfComMdlCtrl_register);
}
void beNDMWSaveIntfComMdlCtrl_register(){
 fn_803250AC();
 meta_registerClass(0,(int)beNDMWSaveIntfComMdlCtrl_meta,(int)beBaseInfoData_register,(int)fn_802B8770,(int)beNDMWSaveIntfComMdlCtrl_getMetaCall,(int)beNDMWSaveIntfComMdlCtrl_className,40,(int)beNDMWSaveIntfComMdlCtrl_vtableRead,(int)beNDMWSaveIntfComMdlCtrl_fieldInit,0,(int)beNDMWSaveIntfComMdlCtrl_dependencies);
}
void *beNDMWSaveIntfComMdlCtrl_getMetaCall(){return beNDMWSaveIntfComMdlCtrl_getMeta();}
}
#pragma pop
