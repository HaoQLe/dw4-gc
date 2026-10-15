#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80024B94();
void *fn_80024FEC();
void *fn_8002E824();
void *fn_800326A0();
void fn_8003EC68(void *,int);
void fn_8004D4BC(void *,float);
void *meta_field(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void fn_80071694(void *,int);
void *fn_801BF730();
void *fn_80216AA0();
extern char lbl_8041D5B0[];
extern char beSystem_fieldTypes[];
extern char beSystem_fieldNames[];
extern char beSystem_fieldStorage[];
extern char beSystem_fieldOffsets[];
extern void *beSystem_meta;
}
extern "C" {
void beSystem_fieldInit(){
 void *value0=beSystem_meta;
 void *value1=meta_fieldCount(value0);
 meta_appendFields(value0,beSystem_fieldTypes,26);
 void *value2=meta_field(value0,(reinterpret_cast<char *>(value1)+3));
 fn_8004D4BC(value2,*reinterpret_cast<float *>((lbl_8041D5B0+0)));
 void *value3=meta_field(value0,(reinterpret_cast<char *>(value1)+7));
 void *value4=fn_80216AA0();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value3)+56)=value4;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value3)+52)=1;
 void *value5=meta_field(value0,(reinterpret_cast<char *>(value1)+8));
 void *value6=fn_80024B94();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value5)+56)=value6;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value5)+52)=1;
 void *value7=meta_field(value0,(reinterpret_cast<char *>(value1)+10));
 fn_80071694(value7,0);
 void *value8=meta_field(value0,(reinterpret_cast<char *>(value1)+11));
 fn_8003EC68(value8,1);
 void *value9=meta_field(value0,(reinterpret_cast<char *>(value1)+12));
 void *value10=fn_800326A0();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value9)+56)=value10;
 void *value11=meta_field(value0,(reinterpret_cast<char *>(value1)+13));
 void *value12=fn_80024FEC();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value11)+56)=value12;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value11)+52)=1;
 void *value13=meta_field(value0,(reinterpret_cast<char *>(value1)+14));
 void *value14=fn_8002E824();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value13)+56)=value14;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value13)+52)=1;
 void *value15=meta_field(value0,(reinterpret_cast<char *>(value1)+15));
 void *value16=fn_801BF730();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value15)+56)=value16;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value15)+52)=1;
 void *value17=meta_field(value0,(reinterpret_cast<char *>(value1)+21));
 fn_8003EC68(value17,1);
 meta_setupFields(value0,beSystem_fieldNames,beSystem_fieldStorage,beSystem_fieldOffsets,value1);
}
}
#pragma pop
