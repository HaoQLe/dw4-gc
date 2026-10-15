#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *beBaseInfoManagerList_getMeta();
void beBaseInfoManagerList_vtableRead();
void *fn_80024180();
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void *meta_field(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void *fn_80284550();
void fn_802B1AC8();
void *beSystem_metaObject();
void *beMessenger_metaObject();
void beBaseInfoList_arkRegister();
void igInfoManager_register();
void igObjectList_register();
extern char beBaseInfoManagerList_className[];
extern char beBaseInfoManager_className[];
extern char beBaseInfoManagerList_dependencies[];
extern char beBaseInfoManager_dependencies[];
extern char beBaseInfoManager_fieldTypes[];
extern char beBaseInfoManager_fieldNames[];
extern char beBaseInfoManager_fieldStorage[];
extern char beBaseInfoManager_fieldOffsets[];
extern char beBaseInfoManagerList_meta[];
extern void *beBaseInfoManager_meta;
extern void *beBaseInfoList_meta;
extern void *lbl_805621F4;
void beBaseInfoManagerList_register();
void *beBaseInfoManagerList_getMetaCall();
void *beBaseInfoManager_getMeta();
void beBaseInfoManager_arkRegister();
void beBaseInfoManager_register();
void *beBaseInfoManager_getMetaCall();
void beBaseInfoManager_fieldInit();
void *beBaseInfoList_metaObject();
}
extern "C" {
void beBaseInfoManagerList_arkRegister(){
 meta_registerNow((int)beBaseInfoManagerList_register);
}
void beBaseInfoManagerList_register(){
 fn_802B1AC8();
 meta_registerClass(0,(int)beBaseInfoManagerList_meta,(int)igObjectList_register,(int)fn_80024180,(int)beBaseInfoManagerList_getMetaCall,(int)beBaseInfoManagerList_className,20,(int)beBaseInfoManagerList_vtableRead,0,0,(int)beBaseInfoManagerList_dependencies);
}
void *beBaseInfoManagerList_getMetaCall(){return beBaseInfoManagerList_getMeta();}
void *beBaseInfoManager_metaObject(){
 if(!beBaseInfoManager_meta) beBaseInfoManager_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return beBaseInfoManager_meta;
}
void *beBaseInfoManager_getMeta(){
 if(!beBaseInfoManager_meta || !(reinterpret_cast<unsigned int *>(beBaseInfoManager_meta)[0x24/4]&4)) beBaseInfoManager_arkRegister();
 return beBaseInfoManager_meta;
}
void beBaseInfoManager_arkRegister(){
 meta_registerNow((int)beBaseInfoManager_register);
}
void beBaseInfoManager_register(){
 fn_802B1AC8();
 meta_registerClass(1,(int)&beBaseInfoManager_meta,(int)igInfoManager_register,(int)fn_80284550,(int)beBaseInfoManager_getMetaCall,(int)beBaseInfoManager_className,32,0,(int)beBaseInfoManager_fieldInit,0,(int)beBaseInfoManager_dependencies);
}
void *beBaseInfoManager_getMetaCall(){return beBaseInfoManager_getMeta();}
void beBaseInfoManager_fieldInit(){
 void *value0=beBaseInfoManager_meta;
 void *value1=meta_fieldCount(value0);
 meta_appendFields(value0,beBaseInfoManager_fieldTypes,4);
 void *value2=meta_field(value0,value1);
 void *value3=beSystem_metaObject();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value2)+60)=0;
 void *value4=meta_field(value0,(reinterpret_cast<char *>(value1)+1));
 void *value5=beMessenger_metaObject();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value4)+56)=value5;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value4)+60)=0;
 void *value6=meta_field(value0,(reinterpret_cast<char *>(value1)+2));
 void *value7=beBaseInfoList_metaObject();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value6)+56)=value7;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value6)+52)=1;
 meta_setupFields(value0,beBaseInfoManager_fieldNames,beBaseInfoManager_fieldStorage,beBaseInfoManager_fieldOffsets,value1);
}
void *beBaseInfoList_metaObject(){
 if(!beBaseInfoList_meta) beBaseInfoList_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return beBaseInfoList_meta;
}
void *beBaseInfoList_getMeta(){
 if(!beBaseInfoList_meta || !(reinterpret_cast<unsigned int *>(beBaseInfoList_meta)[0x24/4]&4)) beBaseInfoList_arkRegister();
 return beBaseInfoList_meta;
}
}
#pragma pop
