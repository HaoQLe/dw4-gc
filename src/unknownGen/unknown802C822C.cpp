#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beModelCtrlInfoHitBody_fieldInit();
void *beModelCtrlInfoHitBody_getMeta();
void beModelCtrlInfoHitBody_vtableRead();
void *fn_800237D0();
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void igObject_register();
extern char beModelCtrlInfoHitBody_className[];
extern char beModelCtrlInfoHitBody_dependencies[];
extern char beModelCtrlInfoHitBody_meta[];
void beModelCtrlInfoHitBody_register();
void *beModelCtrlInfoHitBody_getMetaCall();
}
extern "C" {
void beModelCtrlInfoHitBody_arkRegister(){
 meta_registerNow((int)beModelCtrlInfoHitBody_register);
}
void beModelCtrlInfoHitBody_register(){
 fn_802B1AC8();
 meta_registerClass(0,(int)beModelCtrlInfoHitBody_meta,(int)igObject_register,(int)fn_800237D0,(int)beModelCtrlInfoHitBody_getMetaCall,(int)beModelCtrlInfoHitBody_className,48,(int)beModelCtrlInfoHitBody_vtableRead,(int)beModelCtrlInfoHitBody_fieldInit,0,(int)beModelCtrlInfoHitBody_dependencies);
}
void *beModelCtrlInfoHitBody_getMetaCall(){return beModelCtrlInfoHitBody_getMeta();}
}
#pragma pop
