#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beNumberCtrlInfoWork_fieldInit();
void *beNumberCtrlInfoWork_getMeta();
void beNumberCtrlInfoWork_vtableRead();
void *fn_800237D0();
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void igObject_register();
extern char beNumberCtrlInfoWork_className[];
extern char beNumberCtrlInfoWork_meta[];
void beNumberCtrlInfoWork_register();
void *beNumberCtrlInfoWork_getMetaCall();
}
extern "C" {
void beNumberCtrlInfoWork_arkRegister(){
 meta_registerNow((int)beNumberCtrlInfoWork_register);
}
void beNumberCtrlInfoWork_register(){
 fn_802B1AC8();
 meta_registerClass(0,(int)beNumberCtrlInfoWork_meta,(int)igObject_register,(int)fn_800237D0,(int)beNumberCtrlInfoWork_getMetaCall,(int)beNumberCtrlInfoWork_className,20,(int)beNumberCtrlInfoWork_vtableRead,(int)beNumberCtrlInfoWork_fieldInit,0,0);
}
void *beNumberCtrlInfoWork_getMetaCall(){return beNumberCtrlInfoWork_getMeta();}
}
#pragma pop
