#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beGeneraterInfoWork_fieldInit();
void *beGeneraterInfoWork_getMeta();
void beGeneraterInfoWork_vtableRead();
void *fn_800237D0();
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void igObject_register();
extern char beGeneraterInfoWork_className[];
extern char beGeneraterInfoWork_dependencies[];
extern char beGeneraterInfoWork_meta[];
void beGeneraterInfoWork_register();
void *beGeneraterInfoWork_getMetaCall();
}
extern "C" {
void beGeneraterInfoWork_arkRegister(){
 meta_registerNow((int)beGeneraterInfoWork_register);
}
void beGeneraterInfoWork_register(){
 fn_802B1AC8();
 meta_registerClass(0,(int)beGeneraterInfoWork_meta,(int)igObject_register,(int)fn_800237D0,(int)beGeneraterInfoWork_getMetaCall,(int)beGeneraterInfoWork_className,40,(int)beGeneraterInfoWork_vtableRead,(int)beGeneraterInfoWork_fieldInit,0,(int)beGeneraterInfoWork_dependencies);
}
void *beGeneraterInfoWork_getMetaCall(){return beGeneraterInfoWork_getMeta();}
}
#pragma pop
