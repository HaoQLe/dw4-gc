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
void beMessengerWork_registerNow();
void igObjectList_register();
extern char beMessengerWorkList_className[];
extern char lbl_804D13E4[];
extern char beMessengerWorkList_meta[];
extern void *beMessengerWork_meta;
void beMessengerWorkList_register();
void *beMessengerWorkList_getMetaCall();
}
extern "C" {
void beMessengerWorkList_registerNow(){
 meta_registerNow((int)beMessengerWorkList_register);
}
void beMessengerWorkList_register(){
 fn_802B1AC8();
 meta_registerClass(0,(int)beMessengerWorkList_meta,(int)igObjectList_register,(int)fn_80024180,(int)beMessengerWorkList_getMetaCall,(int)beMessengerWorkList_className,20,(int)beMessengerWorkList_vtableRead,0,0,(int)lbl_804D13E4);
}
void *beMessengerWorkList_getMetaCall(){return beMessengerWorkList_getMeta();}
void *beMessengerWork_create(void *object){
 beMessengerWork_registerNow();
 return meta_createInstance(beMessengerWork_meta,object);
}
void *beMessengerWork_getMeta(){
 if(!beMessengerWork_meta || !(reinterpret_cast<unsigned int *>(beMessengerWork_meta)[0x24/4]&4)) beMessengerWork_registerNow();
 return beMessengerWork_meta;
}
}
#pragma pop
