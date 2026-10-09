#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800365B4();
void *fn_800658E4(void *,void *);
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
void *fn_8034365C();
extern char lbl_804E1A7C[];
extern char lbl_804E1A98[];
extern char lbl_804E1AB4[];
extern char lbl_804E1AD0[];
extern void *lbl_80535DC8;
}
extern "C" {
void beNDMWStatusInfoWork_fieldInit(){
 void *value0=lbl_80535DC8;
 void *value1=fn_80065D88(value0);
 fn_80065924(value0,lbl_804E1A7C,7);
 void *value2=fn_800658E4(value0,value1);
 void *value3=fn_800365B4();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value2)+52)=1;
 void *value4=fn_800658E4(value0,(reinterpret_cast<char *>(value1)+1));
 void *value5=fn_800365B4();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value4)+56)=value5;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value4)+52)=1;
 void *value6=fn_800658E4(value0,(reinterpret_cast<char *>(value1)+2));
 void *value7=fn_8034365C();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value6)+56)=value7;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value6)+52)=1;
 void *value8=fn_800658E4(value0,(reinterpret_cast<char *>(value1)+3));
 void *value9=fn_8034365C();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value8)+56)=value9;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value8)+52)=1;
 void *value10=fn_800658E4(value0,(reinterpret_cast<char *>(value1)+4));
 void *value11=fn_8034365C();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value10)+56)=value11;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value10)+52)=1;
 void *value12=fn_800658E4(value0,(reinterpret_cast<char *>(value1)+5));
 void *value13=fn_8034365C();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value12)+56)=value13;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value12)+52)=1;
 fn_800659C0(value0,lbl_804E1A98,lbl_804E1AB4,lbl_804E1AD0,value1);
}
}
#pragma pop
