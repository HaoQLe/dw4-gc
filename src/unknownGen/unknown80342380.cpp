#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_field(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void *bePadManager_metaObject();
extern char beNDMWLoadCtrl2_fieldTypes[];
extern char beNDMWLoadCtrl2_fieldNames[];
extern char beNDMWLoadCtrl2_fieldStorage[];
extern char beNDMWLoadCtrl2_fieldOffsets[];
extern void *beNDMWLoadCtrl2_meta;
}
extern "C" {
void beNDMWLoadCtrl2_fieldInit(){
 void *value0=beNDMWLoadCtrl2_meta;
 void *value1=meta_fieldCount(value0);
 meta_appendFields(value0,beNDMWLoadCtrl2_fieldTypes,3);
 void *value2=meta_field(value0,value1);
 void *value3=bePadManager_metaObject();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 meta_setupFields(value0,beNDMWLoadCtrl2_fieldNames,beNDMWLoadCtrl2_fieldStorage,beNDMWLoadCtrl2_fieldOffsets,value1);
}
}
#pragma pop
