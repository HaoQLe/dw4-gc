#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *beAsTargetModelDataList_getMeta();
void beAsTargetModelDataList_vtableRead();
void *fn_80024180();
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void beAsTargetModelData_registerNow();
void igObjectList_register();
extern char beAsTargetModelDataList_className[];
extern char lbl_804D2E7C[];
extern char beAsTargetModelDataList_meta[];
extern void *beAsTargetModelData_meta;
void beAsTargetModelDataList_register();
void *beAsTargetModelDataList_getMetaCall();
}
extern "C" {
void beAsTargetModelDataList_registerNow(){
 meta_registerNow((int)beAsTargetModelDataList_register);
}
void beAsTargetModelDataList_register(){
 fn_802B1AC8();
 meta_registerClass(0,(int)beAsTargetModelDataList_meta,(int)igObjectList_register,(int)fn_80024180,(int)beAsTargetModelDataList_getMetaCall,(int)beAsTargetModelDataList_className,20,(int)beAsTargetModelDataList_vtableRead,0,0,(int)lbl_804D2E7C);
}
void *beAsTargetModelDataList_getMetaCall(){return beAsTargetModelDataList_getMeta();}
void *beAsTargetModelData_getMeta(){
 if(!beAsTargetModelData_meta || !(reinterpret_cast<unsigned int *>(beAsTargetModelData_meta)[0x24/4]&4)) beAsTargetModelData_registerNow();
 return beAsTargetModelData_meta;
}
}
#pragma pop
