#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beModelCtrlSCSound_fieldInit();
void *beModelCtrlSCSound_getMeta();
void beModelCtrlSCSound_vtableRead();
void beModelCtrlSubComBase_register();
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void *fn_802C570C();
extern char beModelCtrlSCSound_className[];
extern char beModelCtrlSCSound_meta[];
void beModelCtrlSCSound_register();
void *beModelCtrlSCSound_getMetaCall();
}
extern "C" {
void beModelCtrlSCSound_arkRegister(){
 meta_registerNow((int)beModelCtrlSCSound_register);
}
void beModelCtrlSCSound_register(){
 fn_802B1AC8();
 meta_registerClass(0,(int)beModelCtrlSCSound_meta,(int)beModelCtrlSubComBase_register,(int)fn_802C570C,(int)beModelCtrlSCSound_getMetaCall,(int)beModelCtrlSCSound_className,32,(int)beModelCtrlSCSound_vtableRead,(int)beModelCtrlSCSound_fieldInit,0,0);
}
void *beModelCtrlSCSound_getMetaCall(){return beModelCtrlSCSound_getMeta();}
}
#pragma pop
