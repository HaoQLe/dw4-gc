#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800365B4();
void *fn_800658E4(void *,void *);
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
void *beNDMWStatusTitle03_metaObject();
extern char lbl_804E1CC4[];
extern char lbl_804E1CCC[];
extern char lbl_804E1CD4[];
extern char lbl_804E1CDC[];
extern void *beNDMWShopCtrlA0_meta;
}
extern "C" {
void beNDMWShopCtrlA0_fieldInit(){
 void *value0=beNDMWShopCtrlA0_meta;
 void *value1=fn_80065D88(value0);
 fn_80065924(value0,lbl_804E1CC4,2);
 void *value2=fn_800658E4(value0,value1);
 void *value3=beNDMWStatusTitle03_metaObject();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 void *value4=fn_800658E4(value0,(reinterpret_cast<char *>(value1)+1));
 void *value5=fn_800365B4();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value4)+56)=value5;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value4)+52)=1;
 fn_800659C0(value0,lbl_804E1CCC,lbl_804E1CD4,lbl_804E1CDC,value1);
}
}
#pragma pop
