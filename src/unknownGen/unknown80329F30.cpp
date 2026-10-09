#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800658E4(void *,void *);
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
void fn_80071694(void *,int);
extern char lbl_804E19E0[];
extern char lbl_804E19E4[];
extern char lbl_804E19E8[];
extern char lbl_804E19EC[];
extern void *lbl_80535D88;
}
extern "C" {
void beNDMWShopSelect00_fieldInit(){
 void *value0=lbl_80535D88;
 void *value1=fn_80065D88(value0);
 fn_80065924(value0,lbl_804E19E0,1);
 void *value2=fn_800658E4(value0,value1);
 fn_80071694(value2,0);
 fn_800659C0(value0,lbl_804E19E4,lbl_804E19E8,lbl_804E19EC,value1);
}
}
#pragma pop
