#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800658E4(void *,void *);
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
void *fn_800B9348(void *);
void *fn_800B9DD0(void *);
void *fn_800BA6C8(void *);
void *fn_800BB61C(void *);
void fn_80126CF0(void *,void *);
extern char lbl_8041D5B0[];
extern char lbl_804D19B8[];
extern char lbl_804D19E0[];
extern char lbl_804D1A08[];
extern char lbl_804D1A30[];
extern void *lbl_80535174;
}
struct UnknownGenL802D4104_8 {
 float m08;
 float m0C;
 float m10;
 float m14;
};
extern "C" {
void fn_802D4104(){
 UnknownGenL802D4104_8 local0;
 void *value0=lbl_80535174;
 void *value1=fn_80065D88(value0);
 fn_80065924(value0,lbl_804D19B8,10);
 void *value2=fn_800658E4(value0,(reinterpret_cast<char *>(value1)+5));
 local0.m08=*reinterpret_cast<float *>((lbl_8041D5B0+0));
 local0.m0C=*reinterpret_cast<float *>((lbl_8041D5B0+0));
 local0.m10=*reinterpret_cast<float *>((lbl_8041D5B0+0));
 local0.m14=*reinterpret_cast<float *>((lbl_8041D5B0+0));
 fn_80126CF0(value2,&local0);
 void *value3=fn_800658E4(value0,(reinterpret_cast<char *>(value1)+6));
 void *value4=fn_800BB61C(value3);
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value3)+56)=value4;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value3)+52)=1;
 void *value5=fn_800658E4(value0,(reinterpret_cast<char *>(value1)+7));
 void *value6=fn_800B9DD0(value5);
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value5)+56)=value6;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value5)+52)=1;
 void *value7=fn_800658E4(value0,(reinterpret_cast<char *>(value1)+8));
 void *value8=fn_800BA6C8(value7);
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value7)+56)=value8;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value7)+52)=1;
 void *value9=fn_800658E4(value0,(reinterpret_cast<char *>(value1)+9));
 void *value10=fn_800B9348(value9);
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value9)+56)=value10;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value9)+52)=1;
 fn_800659C0(value0,lbl_804D19E0,lbl_804D1A08,lbl_804D1A30,value1);
}
}
#pragma pop
