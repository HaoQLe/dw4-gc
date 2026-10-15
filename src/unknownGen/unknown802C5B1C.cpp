#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beModelCtrlSCEffect_fieldInit();
void *beModelCtrlSCEffect_getMeta();
void beModelCtrlSCEffect_vtableRead();
void beModelCtrlSubComBase_register();
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void *fn_802C570C();
extern char beModelCtrlSCEffect_className[];
extern char beModelCtrlSCEffect_meta[];
void beModelCtrlSCEffect_register();
void *beModelCtrlSCEffect_getMetaCall();
}
extern "C" {
void beModelCtrlSCEffect_registerNow(){
 meta_registerNow((int)beModelCtrlSCEffect_register);
}
void beModelCtrlSCEffect_register(){
 fn_802B1AC8();
 meta_registerClass(0,(int)beModelCtrlSCEffect_meta,(int)beModelCtrlSubComBase_register,(int)fn_802C570C,(int)beModelCtrlSCEffect_getMetaCall,(int)beModelCtrlSCEffect_className,60,(int)beModelCtrlSCEffect_vtableRead,(int)beModelCtrlSCEffect_fieldInit,0,0);
}
void *beModelCtrlSCEffect_getMetaCall(){return beModelCtrlSCEffect_getMeta();}
}
#pragma pop
