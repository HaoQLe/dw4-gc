#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *bePadDataList_getMeta();
void bePadDataList_vtableRead();
void *fn_80024180();
void *fn_8006546C(void *,void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void fn_802C27DC();
void igObjectList_register();
extern char lbl_8041E5D8[];
extern char lbl_804D01A8[];
extern char lbl_80534AC4[];
extern void *lbl_80534AC8;
void bePadDataList_register();
void *bePadDataList_getMetaCall();
}
extern "C" {
void fn_802C264C(){
 fn_80066188((int)bePadDataList_register);
}
void bePadDataList_register(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_80534AC4,(int)igObjectList_register,(int)fn_80024180,(int)bePadDataList_getMetaCall,(int)lbl_8041E5D8,20,(int)bePadDataList_vtableRead,0,0,(int)lbl_804D01A8);
}
void *bePadDataList_getMetaCall(){return bePadDataList_getMeta();}
void *fn_802C2708(void *object){
 fn_802C27DC();
 return fn_8006546C(lbl_80534AC8,object);
}
void *bePadData_getMeta(){
 if(!lbl_80534AC8 || !(reinterpret_cast<unsigned int *>(lbl_80534AC8)[0x24/4]&4)) fn_802C27DC();
 return lbl_80534AC8;
}
}
#pragma pop
