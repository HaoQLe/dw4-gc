#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beModelCtrl_register();
void beNDMWMdlItem_fieldInit();
void *beNDMWMdlItem_getMeta();
void beNDMWMdlItem_vtableRead();
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_803250AC();
void *fn_803386E8();
extern char beNDMWMdlItem_className[];
extern char beNDMWMdlItem_dependencies[];
extern char beNDMWMdlItem_meta[];
void beNDMWMdlItem_register();
void *beNDMWMdlItem_getMetaCall();
}
extern "C" {
void beNDMWMdlItem_arkRegister(){
 meta_registerNow((int)beNDMWMdlItem_register);
}
void beNDMWMdlItem_register(){
 fn_803250AC();
 meta_registerClass(0,(int)beNDMWMdlItem_meta,(int)beModelCtrl_register,(int)fn_803386E8,(int)beNDMWMdlItem_getMetaCall,(int)beNDMWMdlItem_className,52,(int)beNDMWMdlItem_vtableRead,(int)beNDMWMdlItem_fieldInit,0,(int)beNDMWMdlItem_dependencies);
}
void *beNDMWMdlItem_getMetaCall(){return beNDMWMdlItem_getMeta();}
}
#pragma pop
