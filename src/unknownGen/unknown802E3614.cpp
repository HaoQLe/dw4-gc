#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8004D4BC(void *,float);
void *fn_800658E4(void *,void *);
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
extern char lbl_8041D5B0[];
extern char lbl_8041E6AC[];
extern char lbl_804D2D60[];
extern char lbl_804D2D78[];
extern char lbl_804D2D90[];
extern char lbl_804D2DA8[];
extern void *lbl_805356D4;
}
extern "C" {
void beBaseInfoRamTimer_fieldInit(){
 void *value0=lbl_805356D4;
 void *value1=fn_80065D88(value0);
 fn_80065924(value0,lbl_804D2D60,6);
 void *value2=fn_800658E4(value0,value1);
 fn_8004D4BC(value2,*reinterpret_cast<float *>((lbl_8041D5B0+0)));
 void *value3=fn_800658E4(value0,(reinterpret_cast<char *>(value1)+5));
 fn_8004D4BC(value3,*reinterpret_cast<float *>((lbl_8041E6AC+0)));
 fn_800659C0(value0,lbl_804D2D78,lbl_804D2D90,lbl_804D2DA8,value1);
}
}
#pragma pop
