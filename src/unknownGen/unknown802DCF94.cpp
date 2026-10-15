#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80036C40();
void *meta_field(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
extern char beDataObjBoolList_fieldTypes[];
extern char beDataObjBoolList_fieldNames[];
extern char beDataObjBoolList_fieldStorage[];
extern char beDataObjBoolList_fieldOffsets[];
extern void *beDataObjBoolList_meta;
}
extern "C" {
void beDataObjBoolList_fieldInit(){
 void *value0=beDataObjBoolList_meta;
 void *value1=meta_fieldCount(value0);
 meta_appendFields(value0,beDataObjBoolList_fieldTypes,1);
 void *value2=meta_field(value0,value1);
 void *value3=fn_80036C40();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value2)+52)=1;
 meta_setupFields(value0,beDataObjBoolList_fieldNames,beDataObjBoolList_fieldStorage,beDataObjBoolList_fieldOffsets,value1);
}
}
#pragma pop
