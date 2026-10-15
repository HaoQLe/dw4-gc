#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80034D84();
void *meta_field(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
extern char beDataObjFloatList_fieldTypes[];
extern char beDataObjFloatList_fieldNames[];
extern char beDataObjFloatList_fieldStorage[];
extern char beDataObjFloatList_fieldOffsets[];
extern void *beDataObjFloatList_meta;
}
extern "C" {
void beDataObjFloatList_fieldInit(){
 void *value0=beDataObjFloatList_meta;
 void *value1=meta_fieldCount(value0);
 meta_appendFields(value0,beDataObjFloatList_fieldTypes,1);
 void *value2=meta_field(value0,value1);
 void *value3=fn_80034D84();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value2)+52)=1;
 meta_setupFields(value0,beDataObjFloatList_fieldNames,beDataObjFloatList_fieldStorage,beDataObjFloatList_fieldOffsets,value1);
}
}
#pragma pop
