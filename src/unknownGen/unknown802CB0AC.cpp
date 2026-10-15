#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *beModelCtrlAIMAP_getMeta();
void beModelCtrlAIMAP_vtableRead();
void *fn_80023CF4();
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void beModelCtrlWCHECK_registerNow();
void igNamedObject_register();
extern char beModelCtrlAIMAP_className[];
extern char beModelCtrlAIMAP_meta[];
extern void *beModelCtrlWCHECK_meta;
void beModelCtrlAIMAP_register();
void *beModelCtrlAIMAP_getMetaCall();
}
extern "C" {
void beModelCtrlAIMAP_registerNow(){
 meta_registerNow((int)beModelCtrlAIMAP_register);
}
void beModelCtrlAIMAP_register(){
 fn_802B1AC8();
 meta_registerClass(0,(int)beModelCtrlAIMAP_meta,(int)igNamedObject_register,(int)fn_80023CF4,(int)beModelCtrlAIMAP_getMetaCall,(int)beModelCtrlAIMAP_className,12,(int)beModelCtrlAIMAP_vtableRead,0,0,0);
}
void *beModelCtrlAIMAP_getMetaCall(){return beModelCtrlAIMAP_getMeta();}
void *beModelCtrlWCHECK_getMeta(){
 if(!beModelCtrlWCHECK_meta || !(reinterpret_cast<unsigned int *>(beModelCtrlWCHECK_meta)[0x24/4]&4)) beModelCtrlWCHECK_registerNow();
 return beModelCtrlWCHECK_meta;
}
}
#pragma pop
