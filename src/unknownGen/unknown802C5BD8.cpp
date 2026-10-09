#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80053650(void *,int);
void *fn_800658E4(void *,void *);
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
extern char lbl_804D0648[];
extern char lbl_804D0664[];
extern char lbl_804D0680[];
extern char lbl_804D069C[];
extern void *lbl_80534C20;
}
extern "C" {
void beModelCtrlSCEffect_fieldInit(){
 void *value0=lbl_80534C20;
 void *value1=fn_80065D88(value0);
 fn_80065924(value0,lbl_804D0648,7);
 void *value2=fn_800658E4(value0,value1);
 fn_80053650(value2,-1);
 fn_800659C0(value0,lbl_804D0664,lbl_804D0680,lbl_804D069C,value1);
}
}
#pragma pop
