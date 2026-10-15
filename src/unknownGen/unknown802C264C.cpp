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
void bePadDataList_arkRegister(){
 meta_registerNow((int)bePadDataList_register);
}
void bePadDataList_register(){
 fn_802B1AC8();
 meta_registerClass(0,(int)bePadDataList_meta,(int)igObjectList_register,(int)fn_80024180,(int)bePadDataList_getMetaCall,(int)bePadDataList_className,20,(int)bePadDataList_vtableRead,0,0,(int)bePadDataList_dependencies);
}
void *bePadDataList_getMetaCall(){return bePadDataList_getMeta();}
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
