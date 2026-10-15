#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *beMessengerGroupList_getMeta();
void beMessengerGroupList_vtableRead();
void *fn_80024180();
void *meta_createInstance(void *,void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void beMessengerGroup_registerNow();
void igObjectList_register();
extern char beMessengerGroupList_className[];
extern char lbl_804D1458[];
extern char beMessengerGroupList_meta[];
extern void *beMessengerGroup_meta;
void beMessengerGroupList_register();
void *beMessengerGroupList_getMetaCall();
}
extern "C" {
void beMessengerGroupList_registerNow(){
 meta_registerNow((int)beMessengerGroupList_register);
}
void beMessengerGroupList_register(){
 fn_802B1AC8();
 meta_registerClass(0,(int)beMessengerGroupList_meta,(int)igObjectList_register,(int)fn_80024180,(int)beMessengerGroupList_getMetaCall,(int)beMessengerGroupList_className,20,(int)beMessengerGroupList_vtableRead,0,0,(int)lbl_804D1458);
}
void *beMessengerGroupList_getMetaCall(){return beMessengerGroupList_getMeta();}
void *beMessengerGroup_create(void *object){
 beMessengerGroup_registerNow();
 return meta_createInstance(beMessengerGroup_meta,object);
}
void *beMessengerGroup_getMeta(){
 if(!beMessengerGroup_meta || !(reinterpret_cast<unsigned int *>(beMessengerGroup_meta)[0x24/4]&4)) beMessengerGroup_registerNow();
 return beMessengerGroup_meta;
}
}
#pragma pop
