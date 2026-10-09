#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *beMessengerWorkList_getMeta();
void beMessengerWorkList_vtableRead();
void *fn_80024180();
void *fn_8006546C(void *,void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void fn_802CE7A0();
void igObjectList_register();
extern char lbl_8041F70C[];
extern char lbl_804D13E4[];
extern char lbl_80534FE0[];
extern void *lbl_80534FE4;
void beMessengerWorkList_register();
void *beMessengerWorkList_getMetaCall();
}
extern "C" {
void fn_802CE4E8(){
 fn_80066188((int)beMessengerWorkList_register);
}
void beMessengerWorkList_register(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_80534FE0,(int)igObjectList_register,(int)fn_80024180,(int)beMessengerWorkList_getMetaCall,(int)lbl_8041F70C,20,(int)beMessengerWorkList_vtableRead,0,0,(int)lbl_804D13E4);
}
void *beMessengerWorkList_getMetaCall(){return beMessengerWorkList_getMeta();}
void *fn_802CE5A4(void *object){
 fn_802CE7A0();
 return fn_8006546C(lbl_80534FE4,object);
}
void *beMessengerWork_getMeta(){
 if(!lbl_80534FE4 || !(reinterpret_cast<unsigned int *>(lbl_80534FE4)[0x24/4]&4)) fn_802CE7A0();
 return lbl_80534FE4;
}
}
#pragma pop
