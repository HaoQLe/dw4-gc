#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_field(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void fn_80126808(void *,void *);
extern char lbl_8055EF34[4];
extern char lbl_8055EF40[4];
extern char lbl_8055EF44[4];
extern char lbl_8055EF48[4];
extern void *igScalerModel_meta;
extern char lbl_805669A8[4];
}
struct UnknownGenL8010DD38_8 {
 float m08;
 float m0C;
 float m10;
};
extern "C" {
void igScalerModel_fieldInit(){
 UnknownGenL8010DD38_8 local0;
 void *value0=igScalerModel_meta;
 void *value1=meta_fieldCount(value0);
 meta_appendFields(value0,lbl_8055EF34,1);
 void *value2=meta_field(value0,value1);
 local0.m08=*reinterpret_cast<float *>((lbl_805669A8+0));
 local0.m0C=*reinterpret_cast<float *>((lbl_805669A8+0));
 local0.m10=*reinterpret_cast<float *>((lbl_805669A8+0));
 fn_80126808(value2,&local0);
 meta_setupFields(value0,lbl_8055EF40,lbl_8055EF44,lbl_8055EF48,value1);
}
}
#pragma pop
