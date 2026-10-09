#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800658E4(void *,void *);
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
void *fn_801ADB98();
extern char lbl_804CF438[];
extern char lbl_804CF43C[];
extern char lbl_804CF440[];
extern char lbl_804CF444[];
extern void *lbl_80534714;
}
extern "C" {
void beSwitchCtrlInfo_fieldInit(){
 void *value0=lbl_80534714;
 void *value1=fn_80065D88(value0);
 fn_80065924(value0,lbl_804CF438,1);
 void *value2=fn_800658E4(value0,value1);
 void *value3=fn_801ADB98();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 fn_800659C0(value0,lbl_804CF43C,lbl_804CF440,lbl_804CF444,value1);
}
}
#pragma pop
