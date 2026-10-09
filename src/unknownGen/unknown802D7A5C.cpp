#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *beGeneraterPlayerDataList_getMeta();
void beGeneraterPlayerDataList_vtableRead();
void *fn_80024180();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void fn_802D7C34();
void igObjectList_register();
extern char lbl_80420108[];
extern char lbl_804D1E88[];
extern char lbl_805352C8[];
extern void *lbl_805352CC;
void beGeneraterPlayerDataList_register();
void *beGeneraterPlayerDataList_getMetaCall();
}
extern "C" {
void fn_802D7A5C(){
 fn_80066188((int)beGeneraterPlayerDataList_register);
}
void beGeneraterPlayerDataList_register(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_805352C8,(int)igObjectList_register,(int)fn_80024180,(int)beGeneraterPlayerDataList_getMetaCall,(int)lbl_80420108,20,(int)beGeneraterPlayerDataList_vtableRead,0,0,(int)lbl_804D1E88);
}
void *beGeneraterPlayerDataList_getMetaCall(){return beGeneraterPlayerDataList_getMeta();}
void *beGeneraterPlayerData_getMeta(){
 if(!lbl_805352CC || !(reinterpret_cast<unsigned int *>(lbl_805352CC)[0x24/4]&4)) fn_802D7C34();
 return lbl_805352CC;
}
}
#pragma pop
