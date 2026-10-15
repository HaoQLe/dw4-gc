#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beModelCtrlInfoWork_register();
void beNDMWMdlPlayer2InfoWork_fieldInit();
void *beNDMWMdlPlayer2InfoWork_getMeta();
void beNDMWMdlPlayer2InfoWork_vtableRead();
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_803250AC();
void *fn_80338A20();
extern char beNDMWMdlPlayer2InfoWork_className[];
extern char beNDMWMdlPlayer2InfoWork_meta[];
void beNDMWMdlPlayer2InfoWork_register();
void *beNDMWMdlPlayer2InfoWork_getMetaCall();
}
extern "C" {
void beNDMWMdlPlayer2InfoWork_arkRegister(){
 meta_registerNow((int)beNDMWMdlPlayer2InfoWork_register);
}
void beNDMWMdlPlayer2InfoWork_register(){
 fn_803250AC();
 meta_registerClass(0,(int)beNDMWMdlPlayer2InfoWork_meta,(int)beModelCtrlInfoWork_register,(int)fn_80338A20,(int)beNDMWMdlPlayer2InfoWork_getMetaCall,(int)beNDMWMdlPlayer2InfoWork_className,252,(int)beNDMWMdlPlayer2InfoWork_vtableRead,(int)beNDMWMdlPlayer2InfoWork_fieldInit,0,0);
}
void *beNDMWMdlPlayer2InfoWork_getMetaCall(){return beNDMWMdlPlayer2InfoWork_getMeta();}
}
#pragma pop
