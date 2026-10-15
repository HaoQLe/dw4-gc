#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_field(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void *fn_800B9348(void *);
void *fn_800B9DD0(void *);
void *fn_800BA6C8(void *);
void *fn_800BB61C(void *);
void fn_80126CF0(void *,void *);
extern char lbl_8041D5B0[];
extern char beLOA_fieldTypes[];
extern char beLOA_fieldNames[];
extern char beLOA_fieldStorage[];
extern char beLOA_fieldOffsets[];
extern void *beLOA_meta;
}
struct UnknownGenL802D4104_8 {
 float m08;
 float m0C;
 float m10;
 float m14;
};
extern "C" {
void beLOA_fieldInit(){
 UnknownGenL802D4104_8 local0;
 void *value0=beLOA_meta;
 void *value1=meta_fieldCount(value0);
 meta_appendFields(value0,beLOA_fieldTypes,10);
 void *value2=meta_field(value0,(reinterpret_cast<char *>(value1)+5));
 local0.m08=*reinterpret_cast<float *>((lbl_8041D5B0+0));
 local0.m0C=*reinterpret_cast<float *>((lbl_8041D5B0+0));
 local0.m10=*reinterpret_cast<float *>((lbl_8041D5B0+0));
 local0.m14=*reinterpret_cast<float *>((lbl_8041D5B0+0));
 fn_80126CF0(value2,&local0);
 void *value3=meta_field(value0,(reinterpret_cast<char *>(value1)+6));
 void *value4=fn_800BB61C(value3);
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value3)+56)=value4;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value3)+52)=1;
 void *value5=meta_field(value0,(reinterpret_cast<char *>(value1)+7));
 void *value6=fn_800B9DD0(value5);
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value5)+56)=value6;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value5)+52)=1;
 void *value7=meta_field(value0,(reinterpret_cast<char *>(value1)+8));
 void *value8=fn_800BA6C8(value7);
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value7)+56)=value8;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value7)+52)=1;
 void *value9=meta_field(value0,(reinterpret_cast<char *>(value1)+9));
 void *value10=fn_800B9348(value9);
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value9)+56)=value10;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value9)+52)=1;
 meta_setupFields(value0,beLOA_fieldNames,beLOA_fieldStorage,beLOA_fieldOffsets,value1);
}
}
#pragma pop
