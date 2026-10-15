#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_field(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void *fn_800ADC34();
void *fn_800B51FC();
void *fn_800B9348();
void *fn_800B9DD0();
void *beAction2Data_metaObject();
extern char beAction2InfoWork_fieldTypes[];
extern char beAction2InfoWork_fieldNames[];
extern char beAction2InfoWork_fieldStorage[];
extern char beAction2InfoWork_fieldOffsets[];
extern void *beAction2InfoWork_meta;
}
extern "C" {
void beAction2InfoWork_fieldInit(){
 void *value0=beAction2InfoWork_meta;
 void *value1=meta_fieldCount(value0);
 meta_appendFields(value0,beAction2InfoWork_fieldTypes,21);
 void *value2=meta_field(value0,value1);
 void *value3=beAction2Data_metaObject();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 void *value4=meta_field(value0,(reinterpret_cast<char *>(value1)+17));
 void *value5=fn_800B9348();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value4)+56)=value5;
 void *value6=meta_field(value0,(reinterpret_cast<char *>(value1)+18));
 void *value7=fn_800B9DD0();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value6)+56)=value7;
 void *value8=meta_field(value0,(reinterpret_cast<char *>(value1)+19));
 void *value9=fn_800ADC34();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value8)+56)=value9;
 void *value10=meta_field(value0,(reinterpret_cast<char *>(value1)+20));
 void *value11=fn_800B51FC();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value10)+56)=value11;
 meta_setupFields(value0,beAction2InfoWork_fieldNames,beAction2InfoWork_fieldStorage,beAction2InfoWork_fieldOffsets,value1);
}
}
#pragma pop
