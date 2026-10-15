#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_field(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void *bePlaySEList_metaObject();
void *beCri_metaObject();
extern char beSound_fieldTypes[];
extern char beSound_fieldNames[];
extern char beSound_fieldStorage[];
extern char beSound_fieldOffsets[];
extern void *beSound_meta;
}
extern "C" {
void beSound_fieldInit(){
 void *value0=beSound_meta;
 void *value1=meta_fieldCount(value0);
 meta_appendFields(value0,beSound_fieldTypes,3);
 void *value2=meta_field(value0,value1);
 void *value3=beCri_metaObject();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 void *value4=meta_field(value0,(reinterpret_cast<char *>(value1)+2));
 void *value5=bePlaySEList_metaObject();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value4)+56)=value5;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value4)+52)=1;
 meta_setupFields(value0,beSound_fieldNames,beSound_fieldStorage,beSound_fieldOffsets,value1);
}
}
#pragma pop
