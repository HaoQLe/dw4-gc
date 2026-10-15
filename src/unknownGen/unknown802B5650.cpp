#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_field(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void *fn_801AC2D4();
extern char beTransformSync_fieldTypes[];
extern char beTransformSync_fieldNames[];
extern char beTransformSync_fieldStorage[];
extern char beTransformSync_fieldOffsets[];
extern void *beTransformSync_meta;
}
extern "C" {
void beTransformSync_fieldInit(){
 void *value0=beTransformSync_meta;
 void *value1=meta_fieldCount(value0);
 meta_appendFields(value0,beTransformSync_fieldTypes,1);
 void *value2=meta_field(value0,value1);
 void *value3=fn_801AC2D4();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value2)+52)=1;
 meta_setupFields(value0,beTransformSync_fieldNames,beTransformSync_fieldStorage,beTransformSync_fieldOffsets,value1);
}
}
#pragma pop
