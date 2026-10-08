#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800658E4(void *,void *);
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
void *fn_802C2174();
extern char lbl_804E23CC[];
extern char lbl_804E23D0[];
extern char lbl_804E23D4[];
extern char lbl_804E23D8[];
extern void *lbl_80536090;
}
extern "C" {
void fn_803365D8(){
 void *value0=lbl_80536090;
 void *value1=fn_80065D88(value0);
 fn_80065924(value0,lbl_804E23CC,1);
 void *value2=fn_800658E4(value0,value1);
 void *value3=fn_802C2174();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 fn_800659C0(value0,lbl_804E23D0,lbl_804E23D4,lbl_804E23D8,value1);
}
}
#pragma pop
