#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beSelectCtrlInfoWork_fieldInit();
void *beSelectCtrlInfoWork_getMeta();
void beSelectCtrlInfoWork_vtableRead();
void *fn_800237D0();
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void igObject_register();
extern char beSelectCtrlInfoWork_className[];
extern char beSelectCtrlInfoWork_dependencies[];
extern char beSelectCtrlInfoWork_meta[];
void beSelectCtrlInfoWork_register();
void *beSelectCtrlInfoWork_getMetaCall();
}
extern "C" {
void beSelectCtrlInfoWork_arkRegister(){
 meta_registerNow((int)beSelectCtrlInfoWork_register);
}
void beSelectCtrlInfoWork_register(){
 fn_802B1AC8();
 meta_registerClass(0,(int)beSelectCtrlInfoWork_meta,(int)igObject_register,(int)fn_800237D0,(int)beSelectCtrlInfoWork_getMetaCall,(int)beSelectCtrlInfoWork_className,36,(int)beSelectCtrlInfoWork_vtableRead,(int)beSelectCtrlInfoWork_fieldInit,0,(int)beSelectCtrlInfoWork_dependencies);
}
void *beSelectCtrlInfoWork_getMetaCall(){return beSelectCtrlInfoWork_getMeta();}
}
#pragma pop
