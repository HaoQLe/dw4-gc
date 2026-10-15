#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *beNumberCtrlInfoList_getMeta();
void beNumberCtrlInfoList_vtableRead();
void *fn_80024180();
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void beNumberCtrlInfo_arkRegister();
void igObjectList_register();
extern char beNumberCtrlInfoList_className[];
extern char beNumberCtrlInfoList_dependencies[];
extern char beNumberCtrlInfoList_meta[];
extern void *beNumberCtrlInfo_meta;
void beNumberCtrlInfoList_register();
void *beNumberCtrlInfoList_getMetaCall();
}
extern "C" {
void beNumberCtrlInfoList_arkRegister(){
 meta_registerNow((int)beNumberCtrlInfoList_register);
}
void beNumberCtrlInfoList_register(){
 fn_802B1AC8();
 meta_registerClass(0,(int)beNumberCtrlInfoList_meta,(int)igObjectList_register,(int)fn_80024180,(int)beNumberCtrlInfoList_getMetaCall,(int)beNumberCtrlInfoList_className,20,(int)beNumberCtrlInfoList_vtableRead,0,0,(int)beNumberCtrlInfoList_dependencies);
}
void *beNumberCtrlInfoList_getMetaCall(){return beNumberCtrlInfoList_getMeta();}
void *beNumberCtrlInfo_getMeta(){
 if(!beNumberCtrlInfo_meta || !(reinterpret_cast<unsigned int *>(beNumberCtrlInfo_meta)[0x24/4]&4)) beNumberCtrlInfo_arkRegister();
 return beNumberCtrlInfo_meta;
}
}
#pragma pop
