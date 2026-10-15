#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *beTextureCtrlInfoList_getMeta();
void beTextureCtrlInfoList_vtableRead();
void *fn_80024180();
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void beTextureCtrlInfo_registerNow();
void igObjectList_register();
extern char beTextureCtrlInfoList_className[];
extern char lbl_804CF188[];
extern char beTextureCtrlInfoList_meta[];
extern void *beTextureCtrlInfo_meta;
void beTextureCtrlInfoList_register();
void *beTextureCtrlInfoList_getMetaCall();
}
extern "C" {
void beTextureCtrlInfoList_registerNow(){
 meta_registerNow((int)beTextureCtrlInfoList_register);
}
void beTextureCtrlInfoList_register(){
 fn_802B1AC8();
 meta_registerClass(0,(int)beTextureCtrlInfoList_meta,(int)igObjectList_register,(int)fn_80024180,(int)beTextureCtrlInfoList_getMetaCall,(int)beTextureCtrlInfoList_className,20,(int)beTextureCtrlInfoList_vtableRead,0,0,(int)lbl_804CF188);
}
void *beTextureCtrlInfoList_getMetaCall(){return beTextureCtrlInfoList_getMeta();}
void *beTextureCtrlInfo_getMeta(){
 if(!beTextureCtrlInfo_meta || !(reinterpret_cast<unsigned int *>(beTextureCtrlInfo_meta)[0x24/4]&4)) beTextureCtrlInfo_registerNow();
 return beTextureCtrlInfo_meta;
}
}
#pragma pop
