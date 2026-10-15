#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beNDMWMdlPEBaseInfoWork_register();
void beNDMWMdlPlayerInfoWork_fieldInit();
void *beNDMWMdlPlayerInfoWork_getMeta();
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_803250AC();
void fn_80339040();
void *fn_80339484();
extern char beNDMWMdlPlayerInfoWork_className[];
extern char beNDMWMdlPlayerInfoWork_dependencies[];
extern char beNDMWMdlPlayerInfoWork_meta[];
void beNDMWMdlPlayerInfoWork_register();
void *beNDMWMdlPlayerInfoWork_getMetaCall();
}
extern "C" {
void beNDMWMdlPlayerInfoWork_arkRegister(){
 meta_registerNow((int)beNDMWMdlPlayerInfoWork_register);
}
void beNDMWMdlPlayerInfoWork_register(){
 fn_803250AC();
 meta_registerClass(0,(int)beNDMWMdlPlayerInfoWork_meta,(int)beNDMWMdlPEBaseInfoWork_register,(int)fn_80339484,(int)beNDMWMdlPlayerInfoWork_getMetaCall,(int)beNDMWMdlPlayerInfoWork_className,304,(int)fn_80339040,(int)beNDMWMdlPlayerInfoWork_fieldInit,0,(int)beNDMWMdlPlayerInfoWork_dependencies);
}
void *beNDMWMdlPlayerInfoWork_getMetaCall(){return beNDMWMdlPlayerInfoWork_getMeta();}
}
#pragma pop
