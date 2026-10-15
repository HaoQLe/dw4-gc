#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_field(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void *bePadManager_metaObject();
void *beNDMWMcUtilCtrl_metaObject();
extern char beNDMWTitle2_fieldTypes[];
extern char beNDMWTitle2_fieldNames[];
extern char beNDMWTitle2_fieldStorage[];
extern char beNDMWTitle2_fieldOffsets[];
extern void *beNDMWTitle2_meta;
}
extern "C" {
void beNDMWTitle2_fieldInit(){
 void *value0=beNDMWTitle2_meta;
 void *value1=meta_fieldCount(value0);
 meta_appendFields(value0,beNDMWTitle2_fieldTypes,4);
 void *value2=meta_field(value0,value1);
 void *value3=bePadManager_metaObject();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 void *value4=meta_field(value0,(reinterpret_cast<char *>(value1)+1));
 void *value5=beNDMWMcUtilCtrl_metaObject();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value4)+56)=value5;
 meta_setupFields(value0,beNDMWTitle2_fieldNames,beNDMWTitle2_fieldStorage,beNDMWTitle2_fieldOffsets,value1);
}
}
#pragma pop
