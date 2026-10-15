#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *beHitLandResultDataList_getMeta();
void beHitLandResultDataList_vtableRead();
void *fn_80024180();
void *meta_createInstance(void *,void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void beHitLandResultData_arkRegister();
void igObjectList_register();
extern char beHitLandResultDataList_className[];
extern char beHitLandResultDataList_dependencies[];
extern char beHitLandResultDataList_meta[];
extern void *beHitLandResultData_meta;
void beHitLandResultDataList_register();
void *beHitLandResultDataList_getMetaCall();
}
extern "C" {
void beHitLandResultDataList_arkRegister(){
 meta_registerNow((int)beHitLandResultDataList_register);
}
void beHitLandResultDataList_register(){
 fn_802B1AC8();
 meta_registerClass(0,(int)beHitLandResultDataList_meta,(int)igObjectList_register,(int)fn_80024180,(int)beHitLandResultDataList_getMetaCall,(int)beHitLandResultDataList_className,20,(int)beHitLandResultDataList_vtableRead,0,0,(int)beHitLandResultDataList_dependencies);
}
void *beHitLandResultDataList_getMetaCall(){return beHitLandResultDataList_getMeta();}
void *beHitLandResultData_create(void *object){
 beHitLandResultData_arkRegister();
 return meta_createInstance(beHitLandResultData_meta,object);
}
void *beHitLandResultData_getMeta(){
 if(!beHitLandResultData_meta || !(reinterpret_cast<unsigned int *>(beHitLandResultData_meta)[0x24/4]&4)) beHitLandResultData_arkRegister();
 return beHitLandResultData_meta;
}
}
#pragma pop
