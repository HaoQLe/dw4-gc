#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *bePadDataList_getMeta();
void bePadDataList_vtableRead();
void *fn_80024180();
void *meta_createInstance(void *,void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void bePadData_arkRegister();
void igObjectList_register();
extern char bePadDataList_className[];
extern char bePadDataList_dependencies[];
extern char bePadDataList_meta[];
extern void *bePadData_meta;
void bePadDataList_register();
void *bePadDataList_getMetaCall();
}
extern "C" {
void *bePadData_create(void *object){
 bePadData_arkRegister();
 return meta_createInstance(bePadData_meta,object);
}
void *bePadData_getMeta(){
 if(!bePadData_meta || !(reinterpret_cast<unsigned int *>(bePadData_meta)[0x24/4]&4)) bePadData_arkRegister();
 return bePadData_meta;
}
}
#pragma pop
