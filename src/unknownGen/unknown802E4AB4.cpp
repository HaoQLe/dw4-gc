#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800658E4(void *,void *);
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
void *fn_802E4DE4();
extern char lbl_804D2E8C[];
extern char lbl_804D2E90[];
extern char lbl_804D2E94[];
extern char lbl_804D2E98[];
extern void *lbl_80535734;
}
extern "C" {
void beAsTargetModelData_fieldInit(){
 void *value0=lbl_80535734;
 void *value1=fn_80065D88(value0);
 fn_80065924(value0,lbl_804D2E8C,1);
 void *value2=fn_800658E4(value0,value1);
 void *value3=fn_802E4DE4();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 fn_800659C0(value0,lbl_804D2E90,lbl_804D2E94,lbl_804D2E98,value1);
}
}
#pragma pop
