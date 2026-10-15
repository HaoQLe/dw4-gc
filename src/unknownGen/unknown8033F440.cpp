#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_field(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void *beSaveDataDeliver_metaObject();
void *beMessenger_metaObject();
void *beNDMWMcSlotList_metaObject();
extern char beNDMWMcUtilCtrl_fieldTypes[];
extern char beNDMWMcUtilCtrl_fieldNames[];
extern char beNDMWMcUtilCtrl_fieldStorage[];
extern char beNDMWMcUtilCtrl_fieldOffsets[];
extern void *beNDMWMcUtilCtrl_meta;
}
extern "C" {
void beNDMWMcUtilCtrl_fieldInit(){
 void *value0=beNDMWMcUtilCtrl_meta;
 void *value1=meta_fieldCount(value0);
 meta_appendFields(value0,beNDMWMcUtilCtrl_fieldTypes,17);
 void *value2=meta_field(value0,value1);
 void *value3=beMessenger_metaObject();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value2)+60)=0;
 void *value4=meta_field(value0,(reinterpret_cast<char *>(value1)+11));
 void *value5=beSaveDataDeliver_metaObject();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value4)+56)=value5;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value4)+52)=1;
 void *value6=meta_field(value0,(reinterpret_cast<char *>(value1)+12));
 void *value7=beNDMWMcSlotList_metaObject();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value6)+56)=value7;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value6)+52)=1;
 meta_setupFields(value0,beNDMWMcUtilCtrl_fieldNames,beNDMWMcUtilCtrl_fieldStorage,beNDMWMcUtilCtrl_fieldOffsets,value1);
}
}
#pragma pop
