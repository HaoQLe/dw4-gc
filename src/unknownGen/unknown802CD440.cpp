#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *beMeterCtrlInfoList_getMeta();
void beMeterCtrlInfoList_vtableRead();
void *fn_80024180();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void fn_802CD6E0();
void igObjectList_register();
extern char lbl_8041F568[];
extern char lbl_804D1200[];
extern char lbl_80534F6C[];
extern void *lbl_80534F70;
void beMeterCtrlInfoList_register();
void *beMeterCtrlInfoList_getMetaCall();
}
extern "C" {
void fn_802CD440(){
 fn_80066188((int)beMeterCtrlInfoList_register);
}
void beMeterCtrlInfoList_register(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_80534F6C,(int)igObjectList_register,(int)fn_80024180,(int)beMeterCtrlInfoList_getMetaCall,(int)lbl_8041F568,20,(int)beMeterCtrlInfoList_vtableRead,0,0,(int)lbl_804D1200);
}
void *beMeterCtrlInfoList_getMetaCall(){return beMeterCtrlInfoList_getMeta();}
void *beMeterCtrlInfo_getMeta(){
 if(!lbl_80534F70 || !(reinterpret_cast<unsigned int *>(lbl_80534F70)[0x24/4]&4)) fn_802CD6E0();
 return lbl_80534F70;
}
}
#pragma pop
