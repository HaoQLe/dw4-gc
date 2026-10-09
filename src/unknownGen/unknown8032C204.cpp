#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800658E4(void *,void *);
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
void *fn_8034365C();
extern char lbl_804E1B44[];
extern char lbl_804E1B48[];
extern char lbl_804E1B4C[];
extern char lbl_804E1B50[];
extern void *lbl_80535E00;
}
extern "C" {
void beNDMWShopCtrlXdataChip_fieldInit(){
 void *value0=lbl_80535E00;
 void *value1=fn_80065D88(value0);
 fn_80065924(value0,lbl_804E1B44,1);
 void *value2=fn_800658E4(value0,value1);
 void *value3=fn_8034365C();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value2)+52)=1;
 fn_800659C0(value0,lbl_804E1B48,lbl_804E1B4C,lbl_804E1B50,value1);
}
}
#pragma pop
