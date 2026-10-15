#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_field(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void *beMessenger_metaObject();
void *beDataObjList_metaObject();
void *beDataBase_metaObject();
void *beNDMWShinkaObjectList_metaObject();
void *beNDMWGameRam_metaObject();
extern char beNDMWShinkaCtrl_fieldTypes[];
extern char beNDMWShinkaCtrl_fieldNames[];
extern char beNDMWShinkaCtrl_fieldStorage[];
extern char beNDMWShinkaCtrl_fieldOffsets[];
extern void *beNDMWShinkaCtrl_meta;
}
extern "C" {
void beNDMWShinkaCtrl_fieldInit(){
 void *value0=beNDMWShinkaCtrl_meta;
 void *value1=meta_fieldCount(value0);
 meta_appendFields(value0,beNDMWShinkaCtrl_fieldTypes,6);
 void *value2=meta_field(value0,value1);
 void *value3=beMessenger_metaObject();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value2)+60)=0;
 void *value4=meta_field(value0,(reinterpret_cast<char *>(value1)+1));
 void *value5=beNDMWGameRam_metaObject();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value4)+56)=value5;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value4)+60)=0;
 void *value6=meta_field(value0,(reinterpret_cast<char *>(value1)+3));
 void *value7=beDataObjList_metaObject();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value6)+56)=value7;
 void *value8=meta_field(value0,(reinterpret_cast<char *>(value1)+4));
 void *value9=beDataBase_metaObject();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value8)+56)=value9;
 void *value10=meta_field(value0,(reinterpret_cast<char *>(value1)+5));
 void *value11=beNDMWShinkaObjectList_metaObject();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value10)+56)=value11;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value10)+52)=1;
 meta_setupFields(value0,beNDMWShinkaCtrl_fieldNames,beNDMWShinkaCtrl_fieldStorage,beNDMWShinkaCtrl_fieldOffsets,value1);
}
}
#pragma pop
