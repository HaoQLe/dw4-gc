#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beNDMWMdlPEBase_register();
void beNDMWMdlPlayer_fieldInit();
void *beNDMWMdlPlayer_getMeta();
void beNDMWMdlPlayer_vtableRead();
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_803250AC();
void *fn_80338E68();
extern char beNDMWMdlPlayer_className[];
extern char beNDMWMdlPlayer_dependencies[];
extern char beNDMWMdlPlayer_meta[];
void beNDMWMdlPlayer_register();
void *beNDMWMdlPlayer_getMetaCall();
}
extern "C" {
void beNDMWMdlPlayer_arkRegister(){
 meta_registerNow((int)beNDMWMdlPlayer_register);
}
void beNDMWMdlPlayer_register(){
 fn_803250AC();
 meta_registerClass(0,(int)beNDMWMdlPlayer_meta,(int)beNDMWMdlPEBase_register,(int)fn_80338E68,(int)beNDMWMdlPlayer_getMetaCall,(int)beNDMWMdlPlayer_className,56,(int)beNDMWMdlPlayer_vtableRead,(int)beNDMWMdlPlayer_fieldInit,0,(int)beNDMWMdlPlayer_dependencies);
}
void *beNDMWMdlPlayer_getMetaCall(){return beNDMWMdlPlayer_getMeta();}
}
#pragma pop
