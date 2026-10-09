#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800658E4(void *,void *);
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
void fn_80075AC4(void *,int);
void fn_800BDAB8(int);
void fn_80126CF0(void *,void *);
extern char lbl_8055E5F0[8];
extern char lbl_8055E5F8[8];
extern char lbl_8055E600[8];
extern char lbl_8055E608[8];
extern void *lbl_80562994;
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
 void *value0=lbl_80562994;
 void *value1=fn_80065D88(value0);
 fn_80065924(value0,lbl_8055E5F0,2);
 void *value2=fn_800658E4(value0,value1);
 local0.m08=*reinterpret_cast<float *>((lbl_80566810+0));
 local0.m0C=*reinterpret_cast<float *>((lbl_80566810+0));
 local0.m10=*reinterpret_cast<float *>((lbl_80566810+0));
 local0.m14=*reinterpret_cast<float *>((lbl_80566810+0));
 fn_80126CF0(value2,&local0);
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+48)=(void *)fn_800BDAB8;
 void *value3=fn_800658E4(value0,(reinterpret_cast<char *>(value1)+1));
 fn_80075AC4(value3,-1);
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value3)+38)=0;
 fn_800659C0(value0,lbl_8055E5F8,lbl_8055E600,lbl_8055E608,value1);
}
}
#pragma pop
