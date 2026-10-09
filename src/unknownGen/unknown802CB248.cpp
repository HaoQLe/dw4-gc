#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *beModelCtrlWCHECK_getMeta();
void beModelCtrlWCHECK_vtableRead();
void *fn_80023CF4();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void fn_802CB3E4();
void igNamedObject_register();
extern char lbl_8041F254[];
extern char lbl_80534ED4[];
extern void *lbl_80534ED8;
void beModelCtrlWCHECK_register();
void *beModelCtrlWCHECK_getMetaCall();
}
extern "C" {
void fn_802CB248(){
 fn_80066188((int)beModelCtrlWCHECK_register);
}
void beModelCtrlWCHECK_register(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_80534ED4,(int)igNamedObject_register,(int)fn_80023CF4,(int)beModelCtrlWCHECK_getMetaCall,(int)lbl_8041F254,12,(int)beModelCtrlWCHECK_vtableRead,0,0,0);
}
void *beModelCtrlWCHECK_getMetaCall(){return beModelCtrlWCHECK_getMeta();}
void *beModelCtrlPDMOVE_getMeta(){
 if(!lbl_80534ED8 || !(reinterpret_cast<unsigned int *>(lbl_80534ED8)[0x24/4]&4)) fn_802CB3E4();
 return lbl_80534ED8;
}
}
#pragma pop
