#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800658E4(void *,void *);
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
void *fn_802C2174();
extern char lbl_804E3CD0[];
extern char lbl_804E3CDC[];
extern char lbl_804E3CE8[];
extern char lbl_804E3CF4[];
extern void *lbl_80536718;
}
extern "C" {
void beNDMWLoadCtrl2_fieldInit(){
 void *value0=lbl_80536718;
 void *value1=fn_80065D88(value0);
 fn_80065924(value0,lbl_804E3CD0,3);
 void *value2=fn_800658E4(value0,value1);
 void *value3=fn_802C2174();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 fn_800659C0(value0,lbl_804E3CDC,lbl_804E3CE8,lbl_804E3CF4,value1);
}
}
#pragma pop
