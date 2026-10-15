#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *beModelCtrlCTRL_getMeta();
void beModelCtrlCTRL_vtableRead();
void *fn_80023CF4();
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void beModelCtrlJUMP_arkRegister();
void igNamedObject_register();
extern char beModelCtrlCTRL_className[];
extern char beModelCtrlCTRL_meta[];
extern void *beModelCtrlJUMP_meta;
void beModelCtrlCTRL_register();
void *beModelCtrlCTRL_getMetaCall();
}
extern "C" {
void beModelCtrlCTRL_arkRegister(){
 meta_registerNow((int)beModelCtrlCTRL_register);
}
void beModelCtrlCTRL_register(){
 fn_802B1AC8();
 meta_registerClass(0,(int)beModelCtrlCTRL_meta,(int)igNamedObject_register,(int)fn_80023CF4,(int)beModelCtrlCTRL_getMetaCall,(int)beModelCtrlCTRL_className,12,(int)beModelCtrlCTRL_vtableRead,0,0,0);
}
void *beModelCtrlCTRL_getMetaCall(){return beModelCtrlCTRL_getMeta();}
void *beModelCtrlJUMP_getMeta(){
 if(!beModelCtrlJUMP_meta || !(reinterpret_cast<unsigned int *>(beModelCtrlJUMP_meta)[0x24/4]&4)) beModelCtrlJUMP_arkRegister();
 return beModelCtrlJUMP_meta;
}
}
#pragma pop
