#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *beModelCtrlAIMAP_getMeta();
void beModelCtrlAIMAP_vtableRead();
void *fn_80023CF4();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void fn_802CB248();
void igNamedObject_register();
extern char lbl_8041F240[];
extern char lbl_80534ED0[];
extern void *lbl_80534ED4;
void beModelCtrlAIMAP_register();
void *beModelCtrlAIMAP_getMetaCall();
}
extern "C" {
void fn_802CB0AC(){
 fn_80066188((int)beModelCtrlAIMAP_register);
}
void beModelCtrlAIMAP_register(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_80534ED0,(int)igNamedObject_register,(int)fn_80023CF4,(int)beModelCtrlAIMAP_getMetaCall,(int)lbl_8041F240,12,(int)beModelCtrlAIMAP_vtableRead,0,0,0);
}
void *beModelCtrlAIMAP_getMetaCall(){return beModelCtrlAIMAP_getMeta();}
void *beModelCtrlWCHECK_getMeta(){
 if(!lbl_80534ED4 || !(reinterpret_cast<unsigned int *>(lbl_80534ED4)[0x24/4]&4)) fn_802CB248();
 return lbl_80534ED4;
}
}
#pragma pop
