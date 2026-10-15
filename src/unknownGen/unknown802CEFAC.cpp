#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *beMessengerDelayList_getMeta();
void beMessengerDelayList_vtableRead();
void *fn_80024180();
void *meta_createInstance(void *,void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void beMessengerDelay_registerNow();
void igObjectList_register();
extern char beMessengerDelayList_className[];
extern char lbl_804D14A0[];
extern char beMessengerDelayList_meta[];
extern void *beMessengerDelay_meta;
void beMessengerDelayList_register();
void *beMessengerDelayList_getMetaCall();
}
extern "C" {
void beMessengerDelayList_registerNow(){
 meta_registerNow((int)beMessengerDelayList_register);
}
void beMessengerDelayList_register(){
 fn_802B1AC8();
 meta_registerClass(0,(int)beMessengerDelayList_meta,(int)igObjectList_register,(int)fn_80024180,(int)beMessengerDelayList_getMetaCall,(int)beMessengerDelayList_className,20,(int)beMessengerDelayList_vtableRead,0,0,(int)lbl_804D14A0);
}
void *beMessengerDelayList_getMetaCall(){return beMessengerDelayList_getMeta();}
void *beMessengerDelay_create(void *object){
 beMessengerDelay_registerNow();
 return meta_createInstance(beMessengerDelay_meta,object);
}
void *beMessengerDelay_getMeta(){
 if(!beMessengerDelay_meta || !(reinterpret_cast<unsigned int *>(beMessengerDelay_meta)[0x24/4]&4)) beMessengerDelay_registerNow();
 return beMessengerDelay_meta;
}
}
#pragma pop
