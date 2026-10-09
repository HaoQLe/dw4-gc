#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *beGeneraterDataList_getMeta();
void beGeneraterDataList_vtableRead();
void *fn_80024180();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void fn_802D7774();
void igObjectList_register();
extern char lbl_80420038[];
extern char lbl_804D1DB0[];
extern char lbl_80535290[];
extern void *lbl_80535294;
void beGeneraterDataList_register();
void *beGeneraterDataList_getMetaCall();
}
extern "C" {
void fn_802D73F8(){
 fn_80066188((int)beGeneraterDataList_register);
}
void beGeneraterDataList_register(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_80535290,(int)igObjectList_register,(int)fn_80024180,(int)beGeneraterDataList_getMetaCall,(int)lbl_80420038,20,(int)beGeneraterDataList_vtableRead,0,0,(int)lbl_804D1DB0);
}
void *beGeneraterDataList_getMetaCall(){return beGeneraterDataList_getMeta();}
void *beGeneraterData_getMeta(){
 if(!lbl_80535294 || !(reinterpret_cast<unsigned int *>(lbl_80535294)[0x24/4]&4)) fn_802D7774();
 return lbl_80535294;
}
}
#pragma pop
