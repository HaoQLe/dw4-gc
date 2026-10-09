#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *beHitLandResultDataList_getMeta();
void beHitLandResultDataList_vtableRead();
void *fn_80024180();
void *fn_8006546C(void *,void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void fn_802D5B20();
void igObjectList_register();
extern char lbl_8041FE60[];
extern char lbl_804D1BF8[];
extern char lbl_8053520C[];
extern void *lbl_80535210;
void beHitLandResultDataList_register();
void *beHitLandResultDataList_getMetaCall();
}
extern "C" {
void fn_802D594C(){
 fn_80066188((int)beHitLandResultDataList_register);
}
void beHitLandResultDataList_register(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_8053520C,(int)igObjectList_register,(int)fn_80024180,(int)beHitLandResultDataList_getMetaCall,(int)lbl_8041FE60,20,(int)beHitLandResultDataList_vtableRead,0,0,(int)lbl_804D1BF8);
}
void *beHitLandResultDataList_getMetaCall(){return beHitLandResultDataList_getMeta();}
void *fn_802D5A08(void *object){
 fn_802D5B20();
 return fn_8006546C(lbl_80535210,object);
}
void *beHitLandResultData_getMeta(){
 if(!lbl_80535210 || !(reinterpret_cast<unsigned int *>(lbl_80535210)[0x24/4]&4)) fn_802D5B20();
 return lbl_80535210;
}
}
#pragma pop
