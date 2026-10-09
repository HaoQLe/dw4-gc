#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *beMessengerGroupList_getMeta();
void beMessengerGroupList_vtableRead();
void *fn_80024180();
void *fn_8006546C(void *,void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void fn_802CECEC();
void igObjectList_register();
extern char lbl_8041F77C[];
extern char lbl_804D1458[];
extern char lbl_80535000[];
extern void *lbl_80535004;
void beMessengerGroupList_register();
void *beMessengerGroupList_getMetaCall();
}
extern "C" {
void fn_802CEA40(){
 fn_80066188((int)beMessengerGroupList_register);
}
void beMessengerGroupList_register(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_80535000,(int)igObjectList_register,(int)fn_80024180,(int)beMessengerGroupList_getMetaCall,(int)lbl_8041F77C,20,(int)beMessengerGroupList_vtableRead,0,0,(int)lbl_804D1458);
}
void *beMessengerGroupList_getMetaCall(){return beMessengerGroupList_getMeta();}
void *fn_802CEAFC(void *object){
 fn_802CECEC();
 return fn_8006546C(lbl_80535004,object);
}
void *beMessengerGroup_getMeta(){
 if(!lbl_80535004 || !(reinterpret_cast<unsigned int *>(lbl_80535004)[0x24/4]&4)) fn_802CECEC();
 return lbl_80535004;
}
}
#pragma pop
