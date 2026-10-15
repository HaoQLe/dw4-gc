#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80029A5C();
void *meta_field(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
extern char beAction2Data_fieldTypes[];
extern char beAction2Data_fieldNames[];
extern char beAction2Data_fieldStorage[];
extern char beAction2Data_fieldOffsets[];
extern void *beAction2Data_meta;
}
extern "C" {
void beAction2Data_fieldInit(){
 void *value0=beAction2Data_meta;
 void *value1=meta_fieldCount(value0);
 meta_appendFields(value0,beAction2Data_fieldTypes,1);
 void *value2=meta_field(value0,value1);
 void *value3=fn_80029A5C();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value2)+52)=1;
 meta_setupFields(value0,beAction2Data_fieldNames,beAction2Data_fieldStorage,beAction2Data_fieldOffsets,value1);
}
}
#pragma pop
