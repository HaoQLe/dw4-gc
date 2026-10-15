#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_field(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void *beShadow01InfoList_metaObject();
extern char beShadow01_fieldTypes[];
extern char beShadow01_fieldNames[];
extern char beShadow01_fieldStorage[];
extern char beShadow01_fieldOffsets[];
extern void *beShadow01_meta;
}
extern "C" {
void beShadow01_fieldInit(){
 void *value0=beShadow01_meta;
 void *value1=meta_fieldCount(value0);
 meta_appendFields(value0,beShadow01_fieldTypes,2);
 void *value2=meta_field(value0,value1);
 void *value3=beShadow01InfoList_metaObject();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value2)+52)=1;
 meta_setupFields(value0,beShadow01_fieldNames,beShadow01_fieldStorage,beShadow01_fieldOffsets,value1);
}
}
#pragma pop
