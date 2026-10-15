#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *beModelCtrlJUMP_getMeta();
void beModelCtrlJUMP_vtableRead();
void *fn_80023CF4();
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void beModelCtrlACTION_arkRegister();
void igNamedObject_register();
extern char beModelCtrlJUMP_className[];
extern char beModelCtrlJUMP_meta[];
extern void *beModelCtrlACTION_meta;
void beModelCtrlJUMP_register();
void *beModelCtrlJUMP_getMetaCall();
}
extern "C" {
void beModelCtrlJUMP_arkRegister(){
 meta_registerNow((int)beModelCtrlJUMP_register);
}
void beModelCtrlJUMP_register(){
 fn_802B1AC8();
 meta_registerClass(0,(int)beModelCtrlJUMP_meta,(int)igNamedObject_register,(int)fn_80023CF4,(int)beModelCtrlJUMP_getMetaCall,(int)beModelCtrlJUMP_className,12,(int)beModelCtrlJUMP_vtableRead,0,0,0);
}
void *beModelCtrlJUMP_getMetaCall(){return beModelCtrlJUMP_getMeta();}
void *beModelCtrlACTION_getMeta(){
 if(!beModelCtrlACTION_meta || !(reinterpret_cast<unsigned int *>(beModelCtrlACTION_meta)[0x24/4]&4)) beModelCtrlACTION_arkRegister();
 return beModelCtrlACTION_meta;
}
}
#pragma pop
