#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80024B94();
void *fn_800365B4();
void *fn_800658E4(void *,void *);
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
void *fn_80337108();
void *fn_803375AC();
void *fn_803379F0();
void *fn_80338FA0();
extern char lbl_804E2410[];
extern char lbl_804E243C[];
extern char lbl_804E2468[];
extern char lbl_804E2494[];
extern void *lbl_805360A4;
}
extern "C" {
void fn_80336FC8(){
 void *value0=lbl_805360A4;
 void *value1=fn_80065D88(value0);
 fn_80065924(value0,lbl_804E2410,11);
 void *value2=fn_800658E4(value0,(reinterpret_cast<char *>(value1)+3));
 void *value3=fn_803379F0();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value2)+52)=1;
 void *value4=fn_800658E4(value0,(reinterpret_cast<char *>(value1)+4));
 void *value5=fn_803375AC();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value4)+56)=value5;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value4)+52)=1;
 void *value6=fn_800658E4(value0,(reinterpret_cast<char *>(value1)+5));
 void *value7=fn_80337108();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value6)+56)=value7;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value6)+52)=1;
 void *value8=fn_800658E4(value0,(reinterpret_cast<char *>(value1)+8));
 void *value9=fn_80338FA0();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value8)+56)=value9;
 void *value10=fn_800658E4(value0,(reinterpret_cast<char *>(value1)+9));
 void *value11=fn_80024B94();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value10)+56)=value11;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value10)+52)=1;
 void *value12=fn_800658E4(value0,(reinterpret_cast<char *>(value1)+10));
 void *value13=fn_800365B4();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value12)+56)=value13;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value12)+52)=1;
 fn_800659C0(value0,lbl_804E243C,lbl_804E2468,lbl_804E2494,value1);
}
}
#pragma pop
