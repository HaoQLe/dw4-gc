#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *beWaterMoveDataList_getMeta();
void beWaterMoveDataList_vtableRead();
void *fn_80024180();
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void beWaterMoveData_registerNow();
void igObjectList_register();
extern char beWaterMoveDataList_className[];
extern char lbl_804CF07C[];
extern char beWaterMoveDataList_meta[];
extern void *beWaterMoveData_meta;
void beWaterMoveDataList_register();
void *beWaterMoveDataList_getMetaCall();
}
extern "C" {
void beWaterMoveDataList_registerNow(){
 meta_registerNow((int)beWaterMoveDataList_register);
}
void beWaterMoveDataList_register(){
 fn_802B1AC8();
 meta_registerClass(0,(int)beWaterMoveDataList_meta,(int)igObjectList_register,(int)fn_80024180,(int)beWaterMoveDataList_getMetaCall,(int)beWaterMoveDataList_className,20,(int)beWaterMoveDataList_vtableRead,0,0,(int)lbl_804CF07C);
}
void *beWaterMoveDataList_getMetaCall(){return beWaterMoveDataList_getMeta();}
void *beWaterMoveData_getMeta(){
 if(!beWaterMoveData_meta || !(reinterpret_cast<unsigned int *>(beWaterMoveData_meta)[0x24/4]&4)) beWaterMoveData_registerNow();
 return beWaterMoveData_meta;
}
}
#pragma pop
