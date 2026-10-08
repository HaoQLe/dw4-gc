#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800365B4();
void *fn_800658E4(void *,void *);
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
void *fn_802D2484();
extern char lbl_804D1788[];
extern char lbl_804D17AC[];
extern char lbl_804D17D0[];
extern char lbl_804D17F4[];
extern void *lbl_805350D0;
}
extern "C" {
void fn_802D14C0(){
 void *value0=lbl_805350D0;
 void *value1=fn_80065D88(value0);
 fn_80065924(value0,lbl_804D1788,9);
 void *value2=fn_800658E4(value0,(reinterpret_cast<char *>(value1)+4));
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+52)=(void *)4;
 void *value3=fn_800658E4(value0,(reinterpret_cast<char *>(value1)+5));
 void *value4=fn_800365B4();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value3)+56)=value4;
 void *value5=fn_800658E4(value0,(reinterpret_cast<char *>(value1)+6));
 void *value6=fn_800365B4();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value5)+56)=value6;
 void *value7=fn_800658E4(value0,(reinterpret_cast<char *>(value1)+8));
 void *value8=fn_802D2484();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value7)+56)=value8;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value7)+60)=0;
 fn_800659C0(value0,lbl_804D17AC,lbl_804D17D0,lbl_804D17F4,value1);
}
}
#pragma pop
