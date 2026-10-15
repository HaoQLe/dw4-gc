#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_field(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void fn_80126CF0(void *,void *);
extern char lbl_8055ECD0[4];
extern char lbl_8055ECD4[4];
extern char lbl_8055ECD8[4];
extern char lbl_8055ECDC[4];
extern void *igCustomVectorState_meta;
extern char lbl_805668CC[4];
}
struct UnknownGenL800D5130_8 {
 float m08;
 float m0C;
 float m10;
 float m14;
};
extern "C" {
void igCustomVectorState_fieldInit(){
 UnknownGenL800D5130_8 local0;
 void *value0=igCustomVectorState_meta;
 void *value1=meta_fieldCount(value0);
 meta_appendFields(value0,lbl_8055ECD0,1);
 void *value2=meta_field(value0,value1);
 local0.m08=*reinterpret_cast<float *>((lbl_805668CC+0));
 local0.m0C=*reinterpret_cast<float *>((lbl_805668CC+0));
 local0.m10=*reinterpret_cast<float *>((lbl_805668CC+0));
 local0.m14=*reinterpret_cast<float *>((lbl_805668CC+0));
 fn_80126CF0(value2,&local0);
 meta_setupFields(value0,lbl_8055ECD4,lbl_8055ECD8,lbl_8055ECDC,value1);
}
}
#pragma pop
