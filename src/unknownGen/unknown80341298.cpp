#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beBaseInfoData_register();
void beNDMWLoadIntf2ComMdlCtrl_fieldInit();
void *beNDMWLoadIntf2ComMdlCtrl_getMeta();
void beNDMWLoadIntf2ComMdlCtrl_vtableRead();
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void *fn_802B8770();
void fn_803250AC();
extern char beNDMWLoadIntf2ComMdlCtrl_className[];
extern char beNDMWLoadIntf2ComMdlCtrl_dependencies[];
extern char beNDMWLoadIntf2ComMdlCtrl_meta[];
void beNDMWLoadIntf2ComMdlCtrl_register();
void *beNDMWLoadIntf2ComMdlCtrl_getMetaCall();
}
extern "C" {
void beNDMWLoadIntf2ComMdlCtrl_arkRegister(){
 meta_registerNow((int)beNDMWLoadIntf2ComMdlCtrl_register);
}
void beNDMWLoadIntf2ComMdlCtrl_register(){
 fn_803250AC();
 meta_registerClass(0,(int)beNDMWLoadIntf2ComMdlCtrl_meta,(int)beBaseInfoData_register,(int)fn_802B8770,(int)beNDMWLoadIntf2ComMdlCtrl_getMetaCall,(int)beNDMWLoadIntf2ComMdlCtrl_className,40,(int)beNDMWLoadIntf2ComMdlCtrl_vtableRead,(int)beNDMWLoadIntf2ComMdlCtrl_fieldInit,0,(int)beNDMWLoadIntf2ComMdlCtrl_dependencies);
}
void *beNDMWLoadIntf2ComMdlCtrl_getMetaCall(){return beNDMWLoadIntf2ComMdlCtrl_getMeta();}
}
#pragma pop
