#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_field(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void fn_80071694(void *,int);
extern char beDataObjString_fieldTypes[];
extern char beDataObjString_fieldNames[];
extern char beDataObjString_fieldStorage[];
extern char beDataObjString_fieldOffsets[];
extern void *beDataObjString_meta;
}
extern "C" {
void beDataObjString_fieldInit(){
 void *value0=beDataObjString_meta;
 void *value1=meta_fieldCount(value0);
 meta_appendFields(value0,beDataObjString_fieldTypes,1);
 void *value2=meta_field(value0,value1);
 fn_80071694(value2,0);
 meta_setupFields(value0,beDataObjString_fieldNames,beDataObjString_fieldStorage,beDataObjString_fieldOffsets,value1);
}
}
#pragma pop
