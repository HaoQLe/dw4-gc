#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beModelCtrlSubCom_fieldInit();
void *beModelCtrlSubCom_getMeta();
void beModelCtrlSubCom_vtableRead();
void *fn_800237D0();
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void igObject_register();
extern char beModelCtrlSubCom_className[];
extern char beModelCtrlSubCom_dependencies[];
extern char beModelCtrlSubCom_meta[];
void beModelCtrlSubCom_register();
void *beModelCtrlSubCom_getMetaCall();
}
extern "C" {
void beModelCtrlSubCom_arkRegister(){
 meta_registerNow((int)beModelCtrlSubCom_register);
}
void beModelCtrlSubCom_register(){
 fn_802B1AC8();
 meta_registerClass(0,(int)beModelCtrlSubCom_meta,(int)igObject_register,(int)fn_800237D0,(int)beModelCtrlSubCom_getMetaCall,(int)beModelCtrlSubCom_className,12,(int)beModelCtrlSubCom_vtableRead,(int)beModelCtrlSubCom_fieldInit,0,(int)beModelCtrlSubCom_dependencies);
}
void *beModelCtrlSubCom_getMetaCall(){return beModelCtrlSubCom_getMeta();}
}
#pragma pop
