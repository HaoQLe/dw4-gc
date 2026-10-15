#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80024B94();
void *meta_field(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
extern char be_fieldTypes[];
extern char be_fieldNames[];
extern char be_fieldStorage[];
extern char be_fieldOffsets[];
extern void *be_meta;
}
extern "C" {
void be_fieldInit(){
 void *value0=be_meta;
 void *value1=meta_fieldCount(value0);
 meta_appendFields(value0,be_fieldTypes,1);
 void *value2=meta_field(value0,value1);
 void *value3=fn_80024B94();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value2)+52)=1;
 meta_setupFields(value0,be_fieldNames,be_fieldStorage,be_fieldOffsets,value1);
}
}
#pragma pop
