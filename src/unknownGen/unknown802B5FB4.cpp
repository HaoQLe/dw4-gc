#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *beTextureCtrlInfoList_getMeta();
void beTextureCtrlInfoList_vtableRead();
void *fn_80024180();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void fn_802B6254();
void igObjectList_register();
extern char lbl_8041D334[];
extern char lbl_804CF188[];
extern char lbl_80534660[];
extern void *lbl_80534664;
void beTextureCtrlInfoList_register();
void *beTextureCtrlInfoList_getMetaCall();
}
extern "C" {
void fn_802B5FB4(){
 fn_80066188((int)beTextureCtrlInfoList_register);
}
void beTextureCtrlInfoList_register(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_80534660,(int)igObjectList_register,(int)fn_80024180,(int)beTextureCtrlInfoList_getMetaCall,(int)lbl_8041D334,20,(int)beTextureCtrlInfoList_vtableRead,0,0,(int)lbl_804CF188);
}
void *beTextureCtrlInfoList_getMetaCall(){return beTextureCtrlInfoList_getMeta();}
void *beTextureCtrlInfo_getMeta(){
 if(!lbl_80534664 || !(reinterpret_cast<unsigned int *>(lbl_80534664)[0x24/4]&4)) fn_802B6254();
 return lbl_80534664;
}
}
#pragma pop
