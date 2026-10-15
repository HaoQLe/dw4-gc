#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *beModelCtrlLABEL_getMeta();
void beModelCtrlLABEL_vtableRead();
void *fn_80023CF4();
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void beModelCtrlLUACALL_registerNow();
void igNamedObject_register();
extern char beModelCtrlLABEL_className[];
extern char beModelCtrlLABEL_meta[];
extern void *beModelCtrlLUACALL_meta;
void beModelCtrlLABEL_register();
void *beModelCtrlLABEL_getMetaCall();
}
extern "C" {
void beModelCtrlLABEL_registerNow(){
 meta_registerNow((int)beModelCtrlLABEL_register);
}
void beModelCtrlLABEL_register(){
 fn_802B1AC8();
 meta_registerClass(0,(int)beModelCtrlLABEL_meta,(int)igNamedObject_register,(int)fn_80023CF4,(int)beModelCtrlLABEL_getMetaCall,(int)beModelCtrlLABEL_className,12,(int)beModelCtrlLABEL_vtableRead,0,0,0);
}
void *beModelCtrlLABEL_getMetaCall(){return beModelCtrlLABEL_getMeta();}
void *beModelCtrlLUACALL_getMeta(){
 if(!beModelCtrlLUACALL_meta || !(reinterpret_cast<unsigned int *>(beModelCtrlLUACALL_meta)[0x24/4]&4)) beModelCtrlLUACALL_registerNow();
 return beModelCtrlLUACALL_meta;
}
}
#pragma pop
