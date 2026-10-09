#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *beGeneraterItemDataList_getMeta();
void beGeneraterItemDataList_vtableRead();
void *fn_80024180();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void fn_802D80C0();
void igObjectList_register();
extern char lbl_8042017C[];
extern char lbl_804D1ED8[];
extern char lbl_805352E0[];
extern void *lbl_805352E4;
void beGeneraterItemDataList_register();
void *beGeneraterItemDataList_getMetaCall();
}
extern "C" {
void fn_802D7ED4(){
 fn_80066188((int)beGeneraterItemDataList_register);
}
void beGeneraterItemDataList_register(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_805352E0,(int)igObjectList_register,(int)fn_80024180,(int)beGeneraterItemDataList_getMetaCall,(int)lbl_8042017C,20,(int)beGeneraterItemDataList_vtableRead,0,0,(int)lbl_804D1ED8);
}
void *beGeneraterItemDataList_getMetaCall(){return beGeneraterItemDataList_getMeta();}
void *beGeneraterItemData_getMeta(){
 if(!lbl_805352E4 || !(reinterpret_cast<unsigned int *>(lbl_805352E4)[0x24/4]&4)) fn_802D80C0();
 return lbl_805352E4;
}
}
#pragma pop
