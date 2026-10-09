#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80036C40();
void *fn_800658E4(void *,void *);
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
void *fn_8034365C();
extern char lbl_804E1B60[];
extern char lbl_804E1B68[];
extern char lbl_804E1B70[];
extern char lbl_804E1B78[];
extern void *lbl_80535E08;
}
extern "C" {
void beNDMWShopCtrlSales_fieldInit(){
 void *value0=lbl_80535E08;
 void *value1=fn_80065D88(value0);
 fn_80065924(value0,lbl_804E1B60,2);
 void *value2=fn_800658E4(value0,value1);
 void *value3=fn_8034365C();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 void *value4=fn_800658E4(value0,(reinterpret_cast<char *>(value1)+1));
 void *value5=fn_80036C40();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value4)+56)=value5;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value4)+52)=1;
 fn_800659C0(value0,lbl_804E1B68,lbl_804E1B70,lbl_804E1B78,value1);
}
}
#pragma pop
