#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_field(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void *bePadManager_metaObject();
extern char beNDMWSaveCtrl_fieldTypes[];
extern char beNDMWSaveCtrl_fieldNames[];
extern char beNDMWSaveCtrl_fieldStorage[];
extern char beNDMWSaveCtrl_fieldOffsets[];
extern void *beNDMWSaveCtrl_meta;
}
extern "C" {
void beNDMWSaveCtrl_fieldInit(){
 void *value0=beNDMWSaveCtrl_meta;
 void *value1=meta_fieldCount(value0);
 meta_appendFields(value0,beNDMWSaveCtrl_fieldTypes,1);
 void *value2=meta_field(value0,value1);
 void *value3=bePadManager_metaObject();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 meta_setupFields(value0,beNDMWSaveCtrl_fieldNames,beNDMWSaveCtrl_fieldStorage,beNDMWSaveCtrl_fieldOffsets,value1);
}
}
#pragma pop
