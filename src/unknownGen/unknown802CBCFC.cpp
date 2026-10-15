#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *beModelCtrlMSGBOX_getMeta();
void beModelCtrlMSGBOX_vtableRead();
void *fn_80023CF4();
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void beModelCtrlCTRL_registerNow();
void igNamedObject_register();
extern char beModelCtrlMSGBOX_className[];
extern char beModelCtrlMSGBOX_meta[];
extern void *beModelCtrlCTRL_meta;
void beModelCtrlMSGBOX_register();
void *beModelCtrlMSGBOX_getMetaCall();
}
extern "C" {
void beModelCtrlMSGBOX_registerNow(){
 meta_registerNow((int)beModelCtrlMSGBOX_register);
}
void beModelCtrlMSGBOX_register(){
 fn_802B1AC8();
 meta_registerClass(0,(int)beModelCtrlMSGBOX_meta,(int)igNamedObject_register,(int)fn_80023CF4,(int)beModelCtrlMSGBOX_getMetaCall,(int)beModelCtrlMSGBOX_className,12,(int)beModelCtrlMSGBOX_vtableRead,0,0,0);
}
void *beModelCtrlMSGBOX_getMetaCall(){return beModelCtrlMSGBOX_getMeta();}
void *beModelCtrlCTRL_getMeta(){
 if(!beModelCtrlCTRL_meta || !(reinterpret_cast<unsigned int *>(beModelCtrlCTRL_meta)[0x24/4]&4)) beModelCtrlCTRL_registerNow();
 return beModelCtrlCTRL_meta;
}
}
#pragma pop
