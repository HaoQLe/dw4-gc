#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beDataObjString_fieldInit();
void *beDataObjString_getMeta();
void beDataObjString_vtableRead();
void *fn_80023CF4();
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void igNamedObject_register();
extern char beDataObjString_className[];
extern char beDataObjString_meta[];
void beDataObjString_register();
void *beDataObjString_getMetaCall();
}
extern "C" {
void beDataObjString_arkRegister(){
 meta_registerNow((int)beDataObjString_register);
}
void beDataObjString_register(){
 fn_802B1AC8();
 meta_registerClass(0,(int)beDataObjString_meta,(int)igNamedObject_register,(int)fn_80023CF4,(int)beDataObjString_getMetaCall,(int)beDataObjString_className,16,(int)beDataObjString_vtableRead,(int)beDataObjString_fieldInit,0,0);
}
void *beDataObjString_getMetaCall(){return beDataObjString_getMeta();}
}
#pragma pop
