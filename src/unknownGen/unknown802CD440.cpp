#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *beMeterCtrlInfoList_getMeta();
void beMeterCtrlInfoList_vtableRead();
void *fn_80024180();
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void beMeterCtrlInfo_arkRegister();
void igObjectList_register();
extern char beMeterCtrlInfoList_className[];
extern char beMeterCtrlInfoList_dependencies[];
extern char beMeterCtrlInfoList_meta[];
extern void *beMeterCtrlInfo_meta;
void beMeterCtrlInfoList_register();
void *beMeterCtrlInfoList_getMetaCall();
}
extern "C" {
void beMeterCtrlInfoList_arkRegister(){
 meta_registerNow((int)beMeterCtrlInfoList_register);
}
void beMeterCtrlInfoList_register(){
 fn_802B1AC8();
 meta_registerClass(0,(int)beMeterCtrlInfoList_meta,(int)igObjectList_register,(int)fn_80024180,(int)beMeterCtrlInfoList_getMetaCall,(int)beMeterCtrlInfoList_className,20,(int)beMeterCtrlInfoList_vtableRead,0,0,(int)beMeterCtrlInfoList_dependencies);
}
void *beMeterCtrlInfoList_getMetaCall(){return beMeterCtrlInfoList_getMeta();}
void *beMeterCtrlInfo_getMeta(){
 if(!beMeterCtrlInfo_meta || !(reinterpret_cast<unsigned int *>(beMeterCtrlInfo_meta)[0x24/4]&4)) beMeterCtrlInfo_arkRegister();
 return beMeterCtrlInfo_meta;
}
}
#pragma pop
