#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80024FEC();
void *fn_80034D84();
void *fn_800365B4();
void *fn_800658E4(void *,void *);
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
void *fn_801C89F0();
void *fn_802D9468();
void *fn_802D9FF8();
extern char lbl_804D20E4[];
extern char lbl_804D210C[];
extern char lbl_804D2134[];
extern char lbl_804D215C[];
extern void *lbl_80535358;
}
extern "C" {
void beFont_fieldInit(){
 void *value0=lbl_80535358;
 void *value1=fn_80065D88(value0);
 fn_80065924(value0,lbl_804D20E4,10);
 void *value2=fn_800658E4(value0,value1);
 void *value3=fn_801C89F0();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 void *value4=fn_800658E4(value0,(reinterpret_cast<char *>(value1)+1));
 void *value5=fn_802D9468();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value4)+56)=value5;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value4)+52)=1;
 void *value6=fn_800658E4(value0,(reinterpret_cast<char *>(value1)+3));
 void *value7=fn_802D9FF8();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value6)+56)=value7;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value6)+52)=1;
 void *value8=fn_800658E4(value0,(reinterpret_cast<char *>(value1)+4));
 void *value9=fn_800365B4();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value8)+56)=value9;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value8)+52)=1;
 void *value10=fn_800658E4(value0,(reinterpret_cast<char *>(value1)+5));
 void *value11=fn_80034D84();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value10)+56)=value11;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value10)+52)=1;
 void *value12=fn_800658E4(value0,(reinterpret_cast<char *>(value1)+6));
 void *value13=fn_80024FEC();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value12)+56)=value13;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value12)+52)=1;
 fn_800659C0(value0,lbl_804D210C,lbl_804D2134,lbl_804D215C,value1);
}
}
#pragma pop
