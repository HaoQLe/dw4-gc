#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *beGeneraterDataList_getMeta();
void beGeneraterDataList_vtableRead();
void *fn_80024180();
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void beGeneraterData_registerNow();
void igObjectList_register();
extern char beGeneraterDataList_className[];
extern char lbl_804D1DB0[];
extern char beGeneraterDataList_meta[];
extern void *beGeneraterData_meta;
void beGeneraterDataList_register();
void *beGeneraterDataList_getMetaCall();
}
extern "C" {
void beGeneraterDataList_registerNow(){
 meta_registerNow((int)beGeneraterDataList_register);
}
void beGeneraterDataList_register(){
 fn_802B1AC8();
 meta_registerClass(0,(int)beGeneraterDataList_meta,(int)igObjectList_register,(int)fn_80024180,(int)beGeneraterDataList_getMetaCall,(int)beGeneraterDataList_className,20,(int)beGeneraterDataList_vtableRead,0,0,(int)lbl_804D1DB0);
}
void *beGeneraterDataList_getMetaCall(){return beGeneraterDataList_getMeta();}
void *beGeneraterData_getMeta(){
 if(!beGeneraterData_meta || !(reinterpret_cast<unsigned int *>(beGeneraterData_meta)[0x24/4]&4)) beGeneraterData_registerNow();
 return beGeneraterData_meta;
}
}
#pragma pop
