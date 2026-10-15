#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beXboxImage24k_fieldInit();
void *beXboxImage24k_getMeta();
void beXboxImage24k_vtableRead();
void *fn_800237D0();
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void igObject_register();
extern char beXboxImage24k_className[];
extern char beXboxImage24k_meta[];
void beXboxImage24k_register();
void *beXboxImage24k_getMetaCall();
}
extern "C" {
void beXboxImage24k_arkRegister(){
 meta_registerNow((int)beXboxImage24k_register);
}
void beXboxImage24k_register(){
 fn_802B1AC8();
 meta_registerClass(0,(int)beXboxImage24k_meta,(int)igObject_register,(int)fn_800237D0,(int)beXboxImage24k_getMetaCall,(int)beXboxImage24k_className,16,(int)beXboxImage24k_vtableRead,(int)beXboxImage24k_fieldInit,0,0);
}
void *beXboxImage24k_getMetaCall(){return beXboxImage24k_getMeta();}
}
#pragma pop
