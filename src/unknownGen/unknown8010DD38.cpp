#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800658E4(void *,void *);
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
void fn_80126808(void *,void *);
extern char lbl_8055EF34[4];
extern char lbl_8055EF40[4];
extern char lbl_8055EF44[4];
extern char lbl_8055EF48[4];
extern void *lbl_805635C8;
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
 void *value0=lbl_805635C8;
 void *value1=fn_80065D88(value0);
 fn_80065924(value0,lbl_8055EF34,1);
 void *value2=fn_800658E4(value0,value1);
 local0.m08=*reinterpret_cast<float *>((lbl_805669A8+0));
 local0.m0C=*reinterpret_cast<float *>((lbl_805669A8+0));
 local0.m10=*reinterpret_cast<float *>((lbl_805669A8+0));
 fn_80126808(value2,&local0);
 fn_800659C0(value0,lbl_8055EF40,lbl_8055EF44,lbl_8055EF48,value1);
}
}
#pragma pop
