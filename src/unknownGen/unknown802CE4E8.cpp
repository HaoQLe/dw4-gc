#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *beMessengerWorkList_getMeta();
void beMessengerWorkList_vtableRead();
void *fn_80024180();
void *meta_createInstance(void *,void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void beMessengerWork_arkRegister();
void igObjectList_register();
extern char beMessengerWorkList_className[];
extern char beMessengerWorkList_dependencies[];
extern char beMessengerWorkList_meta[];
extern void *beMessengerWork_meta;
void beMessengerWorkList_register();
void *beMessengerWorkList_getMetaCall();
}
extern "C" {
void beMessengerWorkList_arkRegister(){
 meta_registerNow((int)beMessengerWorkList_register);
}
void beMessengerWorkList_register(){
 fn_802B1AC8();
 meta_registerClass(0,(int)beMessengerWorkList_meta,(int)igObjectList_register,(int)fn_80024180,(int)beMessengerWorkList_getMetaCall,(int)beMessengerWorkList_className,20,(int)beMessengerWorkList_vtableRead,0,0,(int)beMessengerWorkList_dependencies);
}
void *beMessengerWorkList_getMetaCall(){return beMessengerWorkList_getMeta();}
void *beMessengerWork_create(void *object){
 beMessengerWork_arkRegister();
 return meta_createInstance(beMessengerWork_meta,object);
}
void *beMessengerWork_getMeta(){
 if(!beMessengerWork_meta || !(reinterpret_cast<unsigned int *>(beMessengerWork_meta)[0x24/4]&4)) beMessengerWork_arkRegister();
 return beMessengerWork_meta;
}
}
#pragma pop
