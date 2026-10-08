#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800658E4(void *,void *);
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
void fn_80126CF0(void *,void *);
extern char lbl_8055E1B8[4];
extern char lbl_8055E1C4[4];
extern char lbl_8055E1C8[4];
extern char lbl_8055E1CC[4];
extern void *lbl_8056263C;
extern char lbl_80566814[4];
}
struct UnknownGenL800B134C_8 {
 float m08;
 float m0C;
 float m10;
 float m14;
};
extern "C" {
void fn_800B134C(){
 UnknownGenL800B134C_8 local0;
 void *value0=lbl_8056263C;
 void *value1=fn_80065D88(value0);
 fn_80065924(value0,lbl_8055E1B8,1);
 void *value2=fn_800658E4(value0,value1);
 local0.m08=*reinterpret_cast<float *>((lbl_80566814+0));
 local0.m0C=*reinterpret_cast<float *>((lbl_80566814+0));
 local0.m10=*reinterpret_cast<float *>((lbl_80566814+0));
 local0.m14=*reinterpret_cast<float *>((lbl_80566814+0));
 fn_80126CF0(value2,&local0);
 fn_800659C0(value0,lbl_8055E1C4,lbl_8055E1C8,lbl_8055E1CC,value1);
}
}
#pragma pop
