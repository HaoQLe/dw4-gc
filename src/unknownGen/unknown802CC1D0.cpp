#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *beModelCtrlACTION_getMeta();
void beModelCtrlACTION_vtableRead();
void *fn_80023CF4();
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void beModelCtrlLABELCTRL_registerNow();
void igNamedObject_register();
extern char beModelCtrlACTION_className[];
extern char beModelCtrlACTION_meta[];
extern void *beModelCtrlLABELCTRL_meta;
void beModelCtrlACTION_register();
void *beModelCtrlACTION_getMetaCall();
}
extern "C" {
void beModelCtrlACTION_registerNow(){
 meta_registerNow((int)beModelCtrlACTION_register);
}
void beModelCtrlACTION_register(){
 fn_802B1AC8();
 meta_registerClass(0,(int)beModelCtrlACTION_meta,(int)igNamedObject_register,(int)fn_80023CF4,(int)beModelCtrlACTION_getMetaCall,(int)beModelCtrlACTION_className,12,(int)beModelCtrlACTION_vtableRead,0,0,0);
}
void *beModelCtrlACTION_getMetaCall(){return beModelCtrlACTION_getMeta();}
void *beModelCtrlLABELCTRL_getMeta(){
 if(!beModelCtrlLABELCTRL_meta || !(reinterpret_cast<unsigned int *>(beModelCtrlLABELCTRL_meta)[0x24/4]&4)) beModelCtrlLABELCTRL_registerNow();
 return beModelCtrlLABELCTRL_meta;
}
}
#pragma pop
