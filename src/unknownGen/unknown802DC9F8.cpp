#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80024B94();
void *meta_field(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
extern char beDataObjStringList_fieldTypes[];
extern char beDataObjStringList_fieldNames[];
extern char beDataObjStringList_fieldStorage[];
extern char beDataObjStringList_fieldOffsets[];
extern void *beDataObjStringList_meta;
}
extern "C" {
void beDataObjStringList_fieldInit(){
 void *value0=beDataObjStringList_meta;
 void *value1=meta_fieldCount(value0);
 meta_appendFields(value0,beDataObjStringList_fieldTypes,1);
 void *value2=meta_field(value0,value1);
 void *value3=fn_80024B94();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value2)+52)=1;
 meta_setupFields(value0,beDataObjStringList_fieldNames,beDataObjStringList_fieldStorage,beDataObjStringList_fieldOffsets,value1);
}
}
#pragma pop
