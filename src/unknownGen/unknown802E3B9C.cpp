#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *beBaseInfoList_getMeta();
void beBaseInfoList_vtableRead();
void *fn_80024180();
void *fn_800284EC();
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void *meta_createInstance(void *,void *);
void *meta_field(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void *beBaseInfoRamList_metaObject();
void beBaseInfoDataList_arkRegister();
void igInfo_register();
void igObjectList_register();
extern char beBaseInfoList_className[];
extern char beBaseInfo_className[];
extern char beBaseInfoList_dependencies[];
extern char beBaseInfo_dependencies[];
extern char beBaseInfo_fieldTypes[];
extern char beBaseInfo_fieldNames[];
extern char beBaseInfo_fieldStorage[];
extern char beBaseInfo_fieldOffsets[];
extern char beBaseInfoList_meta[];
extern void *beBaseInfo_meta;
extern void *beBaseInfoDataList_meta;
extern void *lbl_805621F4;
void beBaseInfoList_register();
void *beBaseInfoList_getMetaCall();
void *beBaseInfo_getMeta();
void beBaseInfo_arkRegister();
void beBaseInfo_register();
void *beBaseInfo_getMetaCall();
void beBaseInfo_fieldInit();
void *beBaseInfoDataList_metaObject();
}
extern "C" {
void beBaseInfoList_arkRegister(){
 meta_registerNow((int)beBaseInfoList_register);
}
void beBaseInfoList_register(){
 fn_802B1AC8();
 meta_registerClass(0,(int)beBaseInfoList_meta,(int)igObjectList_register,(int)fn_80024180,(int)beBaseInfoList_getMetaCall,(int)beBaseInfoList_className,20,(int)beBaseInfoList_vtableRead,0,0,(int)beBaseInfoList_dependencies);
}
void *beBaseInfoList_getMetaCall(){return beBaseInfoList_getMeta();}
void *beBaseInfo_metaObject(){
 if(!beBaseInfo_meta) beBaseInfo_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return beBaseInfo_meta;
}
void *beBaseInfo_getMeta(){
 if(!beBaseInfo_meta || !(reinterpret_cast<unsigned int *>(beBaseInfo_meta)[0x24/4]&4)) beBaseInfo_arkRegister();
 return beBaseInfo_meta;
}
void beBaseInfo_arkRegister(){
 meta_registerNow((int)beBaseInfo_register);
}
void beBaseInfo_register(){
 fn_802B1AC8();
 meta_registerClass(1,(int)&beBaseInfo_meta,(int)igInfo_register,(int)fn_800284EC,(int)beBaseInfo_getMetaCall,(int)beBaseInfo_className,28,0,(int)beBaseInfo_fieldInit,0,(int)beBaseInfo_dependencies);
}
void *beBaseInfo_getMetaCall(){return beBaseInfo_getMeta();}
void beBaseInfo_fieldInit(){
 void *value0=beBaseInfo_meta;
 void *value1=meta_fieldCount(value0);
 meta_appendFields(value0,beBaseInfo_fieldTypes,2);
 void *value2=meta_field(value0,value1);
 void *value3=beBaseInfoDataList_metaObject();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 void *value4=meta_field(value0,(reinterpret_cast<char *>(value1)+1));
 void *value5=beBaseInfoRamList_metaObject();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value4)+56)=value5;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value4)+52)=1;
 meta_setupFields(value0,beBaseInfo_fieldNames,beBaseInfo_fieldStorage,beBaseInfo_fieldOffsets,value1);
}
void *beBaseInfoDataList_create(void *object){
 beBaseInfoDataList_arkRegister();
 return meta_createInstance(beBaseInfoDataList_meta,object);
}
void *beBaseInfoDataList_metaObject(){
 if(!beBaseInfoDataList_meta) beBaseInfoDataList_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return beBaseInfoDataList_meta;
}
void *beBaseInfoDataList_getMeta(){
 if(!beBaseInfoDataList_meta || !(reinterpret_cast<unsigned int *>(beBaseInfoDataList_meta)[0x24/4]&4)) beBaseInfoDataList_arkRegister();
 return beBaseInfoDataList_meta;
}
}
#pragma pop
