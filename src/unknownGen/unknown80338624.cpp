#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beModelCtrl_register();
void beNDMWMdlPlayer2_fieldInit();
void *beNDMWMdlPlayer2_getMeta();
void beNDMWMdlPlayer2_vtableRead();
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_803250AC();
void *fn_803386E8();
extern char beNDMWMdlPlayer2_className[];
extern char beNDMWMdlPlayer2_dependencies[];
extern char beNDMWMdlPlayer2_meta[];
void beNDMWMdlPlayer2_register();
void *beNDMWMdlPlayer2_getMetaCall();
}
extern "C" {
void beNDMWMdlPlayer2_arkRegister(){
 meta_registerNow((int)beNDMWMdlPlayer2_register);
}
void beNDMWMdlPlayer2_register(){
 fn_803250AC();
 meta_registerClass(0,(int)beNDMWMdlPlayer2_meta,(int)beModelCtrl_register,(int)fn_803386E8,(int)beNDMWMdlPlayer2_getMetaCall,(int)beNDMWMdlPlayer2_className,48,(int)beNDMWMdlPlayer2_vtableRead,(int)beNDMWMdlPlayer2_fieldInit,0,(int)beNDMWMdlPlayer2_dependencies);
}
void *beNDMWMdlPlayer2_getMetaCall(){return beNDMWMdlPlayer2_getMeta();}
}
#pragma pop
