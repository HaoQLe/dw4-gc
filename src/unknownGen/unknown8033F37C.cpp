#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beNDMWMcUtilCtrl_fieldInit();
void *beNDMWMcUtilCtrl_getMeta();
void beNDMWMcUtilCtrl_vtableRead();
void *fn_800237D0();
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_803250AC();
void igObject_register();
extern char beNDMWMcUtilCtrl_className[];
extern char beNDMWMcUtilCtrl_dependencies[];
extern char beNDMWMcUtilCtrl_meta[];
void beNDMWMcUtilCtrl_register();
void *beNDMWMcUtilCtrl_getMetaCall();
}
extern "C" {
void beNDMWMcUtilCtrl_arkRegister(){
 meta_registerNow((int)beNDMWMcUtilCtrl_register);
}
void beNDMWMcUtilCtrl_register(){
 fn_803250AC();
 meta_registerClass(0,(int)beNDMWMcUtilCtrl_meta,(int)igObject_register,(int)fn_800237D0,(int)beNDMWMcUtilCtrl_getMetaCall,(int)beNDMWMcUtilCtrl_className,64,(int)beNDMWMcUtilCtrl_vtableRead,(int)beNDMWMcUtilCtrl_fieldInit,0,(int)beNDMWMcUtilCtrl_dependencies);
}
void *beNDMWMcUtilCtrl_getMetaCall(){return beNDMWMcUtilCtrl_getMeta();}
}
#pragma pop
