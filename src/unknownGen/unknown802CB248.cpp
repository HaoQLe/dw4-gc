#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *beModelCtrlWCHECK_getMeta();
void beModelCtrlWCHECK_vtableRead();
void *fn_80023CF4();
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void beModelCtrlPDMOVE_registerNow();
void igNamedObject_register();
extern char beModelCtrlWCHECK_className[];
extern char beModelCtrlWCHECK_meta[];
extern void *beModelCtrlPDMOVE_meta;
void beModelCtrlWCHECK_register();
void *beModelCtrlWCHECK_getMetaCall();
}
extern "C" {
void beModelCtrlWCHECK_registerNow(){
 meta_registerNow((int)beModelCtrlWCHECK_register);
}
void beModelCtrlWCHECK_register(){
 fn_802B1AC8();
 meta_registerClass(0,(int)beModelCtrlWCHECK_meta,(int)igNamedObject_register,(int)fn_80023CF4,(int)beModelCtrlWCHECK_getMetaCall,(int)beModelCtrlWCHECK_className,12,(int)beModelCtrlWCHECK_vtableRead,0,0,0);
}
void *beModelCtrlWCHECK_getMetaCall(){return beModelCtrlWCHECK_getMeta();}
void *beModelCtrlPDMOVE_getMeta(){
 if(!beModelCtrlPDMOVE_meta || !(reinterpret_cast<unsigned int *>(beModelCtrlPDMOVE_meta)[0x24/4]&4)) beModelCtrlPDMOVE_registerNow();
 return beModelCtrlPDMOVE_meta;
}
}
#pragma pop
