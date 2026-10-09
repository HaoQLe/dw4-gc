#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *beMessengerDelayList_getMeta();
void beMessengerDelayList_vtableRead();
void *fn_80024180();
void *fn_8006546C(void *,void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void fn_802CF244();
void igObjectList_register();
extern char lbl_8041F7D0[];
extern char lbl_804D14A0[];
extern char lbl_80535014[];
extern void *lbl_80535018;
void beMessengerDelayList_register();
void *beMessengerDelayList_getMetaCall();
}
extern "C" {
void fn_802CEFAC(){
 fn_80066188((int)beMessengerDelayList_register);
}
void beMessengerDelayList_register(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_80535014,(int)igObjectList_register,(int)fn_80024180,(int)beMessengerDelayList_getMetaCall,(int)lbl_8041F7D0,20,(int)beMessengerDelayList_vtableRead,0,0,(int)lbl_804D14A0);
}
void *beMessengerDelayList_getMetaCall(){return beMessengerDelayList_getMeta();}
void *fn_802CF068(void *object){
 fn_802CF244();
 return fn_8006546C(lbl_80535018,object);
}
void *beMessengerDelay_getMeta(){
 if(!lbl_80535018 || !(reinterpret_cast<unsigned int *>(lbl_80535018)[0x24/4]&4)) fn_802CF244();
 return lbl_80535018;
}
}
#pragma pop
