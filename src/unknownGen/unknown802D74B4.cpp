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
void beGeneraterData_arkRegister();
void igObjectList_register();
extern char beGeneraterDataList_className[];
extern char beGeneraterDataList_dependencies[];
extern char beGeneraterDataList_meta[];
extern void *beGeneraterData_meta;
void beGeneraterDataList_register();
void *beGeneraterDataList_getMetaCall();
}
extern "C" {
void *beGeneraterData_getMeta(){
 if(!beGeneraterData_meta || !(reinterpret_cast<unsigned int *>(beGeneraterData_meta)[0x24/4]&4)) beGeneraterData_arkRegister();
 return beGeneraterData_meta;
}
}
#pragma pop
