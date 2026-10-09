#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800658E4(void *,void *);
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
void *fn_801AC644();
extern char lbl_804D2960[];
extern char lbl_804D2964[];
extern char lbl_804D2968[];
extern char lbl_804D296C[];
extern void *lbl_805355CC;
}
extern "C" {
void beChangePosTransformInfoRam_fieldInit(){
 void *value0=lbl_805355CC;
 void *value1=fn_80065D88(value0);
 fn_80065924(value0,lbl_804D2960,1);
 void *value2=fn_800658E4(value0,value1);
 void *value3=fn_801AC644();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 fn_800659C0(value0,lbl_804D2964,lbl_804D2968,lbl_804D296C,value1);
}
}
#pragma pop
