#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_field(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void fn_80075AC4(void *,int);
void fn_800BDAB8(int);
void fn_80126CF0(void *,void *);
extern char igColorAttr_fieldTypes[8];
extern char igColorAttr_fieldNames[8];
extern char igColorAttr_fieldStorage[8];
extern char igColorAttr_fieldOffsets[8];
extern void *igColorAttr_meta;
extern char lbl_80566810[4];
}
struct UnknownGenL800B94D0_8 {
 float m08;
 float m0C;
 float m10;
 float m14;
};
extern "C" {
void igColorAttr_fieldInit(){
 UnknownGenL800B94D0_8 local0;
 void *value0=igColorAttr_meta;
 void *value1=meta_fieldCount(value0);
 meta_appendFields(value0,igColorAttr_fieldTypes,2);
 void *value2=meta_field(value0,value1);
 local0.m08=*reinterpret_cast<float *>((lbl_80566810+0));
 local0.m0C=*reinterpret_cast<float *>((lbl_80566810+0));
 local0.m10=*reinterpret_cast<float *>((lbl_80566810+0));
 local0.m14=*reinterpret_cast<float *>((lbl_80566810+0));
 fn_80126CF0(value2,&local0);
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+48)=(void *)fn_800BDAB8;
 void *value3=meta_field(value0,(reinterpret_cast<char *>(value1)+1));
 fn_80075AC4(value3,-1);
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value3)+38)=0;
 meta_setupFields(value0,igColorAttr_fieldNames,igColorAttr_fieldStorage,igColorAttr_fieldOffsets,value1);
}
}
#pragma pop
