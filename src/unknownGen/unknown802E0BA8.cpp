#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800658E4(void *,void *);
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
void *fn_802C5E48();
extern char lbl_804D2948[];
extern char lbl_804D294C[];
extern char lbl_804D2950[];
extern char lbl_804D2954[];
extern void *lbl_805355C4;
}
extern "C" {
void beCopyModelCtrl2_fieldInit(){
 void *value0=lbl_805355C4;
 void *value1=fn_80065D88(value0);
 fn_80065924(value0,lbl_804D2948,1);
 void *value2=fn_800658E4(value0,value1);
 void *value3=fn_802C5E48();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 fn_800659C0(value0,lbl_804D294C,lbl_804D2950,lbl_804D2954,value1);
}
}
#pragma pop
