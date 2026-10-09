#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800658E4(void *,void *);
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
void *fn_801BFC74();
extern char lbl_804D2A30[];
extern char lbl_804D2A3C[];
extern char lbl_804D2A48[];
extern char lbl_804D2A54[];
extern void *lbl_8053560C;
}
extern "C" {
void beCameraDemoData_fieldInit(){
 void *value0=lbl_8053560C;
 void *value1=fn_80065D88(value0);
 fn_80065924(value0,lbl_804D2A30,3);
 void *value2=fn_800658E4(value0,value1);
 void *value3=fn_801BFC74();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 fn_800659C0(value0,lbl_804D2A3C,lbl_804D2A48,lbl_804D2A54,value1);
}
}
#pragma pop
