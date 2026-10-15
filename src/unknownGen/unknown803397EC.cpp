#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beModelCtrlInfoWork_register();
void beNDMWMdlPEBaseInfoWork_fieldInit();
void *beNDMWMdlPEBaseInfoWork_getMeta();
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_803250AC();
void *fn_80338A20();
void fn_8033979C();
extern char beNDMWMdlPEBaseInfoWork_className[];
extern char beNDMWMdlPEBaseInfoWork_dependencies[];
extern char beNDMWMdlPEBaseInfoWork_meta[];
void beNDMWMdlPEBaseInfoWork_register();
void *beNDMWMdlPEBaseInfoWork_getMetaCall();
}
extern "C" {
void beNDMWMdlPEBaseInfoWork_arkRegister(){
 meta_registerNow((int)beNDMWMdlPEBaseInfoWork_register);
}
void beNDMWMdlPEBaseInfoWork_register(){
 fn_803250AC();
 meta_registerClass(0,(int)beNDMWMdlPEBaseInfoWork_meta,(int)beModelCtrlInfoWork_register,(int)fn_80338A20,(int)beNDMWMdlPEBaseInfoWork_getMetaCall,(int)beNDMWMdlPEBaseInfoWork_className,276,(int)fn_8033979C,(int)beNDMWMdlPEBaseInfoWork_fieldInit,0,(int)beNDMWMdlPEBaseInfoWork_dependencies);
}
void *beNDMWMdlPEBaseInfoWork_getMetaCall(){return beNDMWMdlPEBaseInfoWork_getMeta();}
}
#pragma pop
