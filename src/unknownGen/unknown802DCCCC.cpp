#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800658E4(void *,void *);
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
void fn_80071694(void *,int);
extern char lbl_804D2464[];
extern char lbl_804D2468[];
extern char lbl_804D246C[];
extern char lbl_804D2470[];
extern void *lbl_80535458;
}
extern "C" {
void beDataObjString_fieldInit(){
 void *value0=lbl_80535458;
 void *value1=fn_80065D88(value0);
 fn_80065924(value0,lbl_804D2464,1);
 void *value2=fn_800658E4(value0,value1);
 fn_80071694(value2,0);
 fn_800659C0(value0,lbl_804D2468,lbl_804D246C,lbl_804D2470,value1);
}
}
#pragma pop
