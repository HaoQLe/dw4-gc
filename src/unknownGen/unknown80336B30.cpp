#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800658E4(void *,void *);
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
void *fn_80336C10();
extern char lbl_804E23E4[];
extern char lbl_804E23E8[];
extern char lbl_804E23EC[];
extern char lbl_804E23F0[];
extern void *lbl_8053609C;
}
extern "C" {
void fn_80336B30(){
 void *value0=lbl_8053609C;
 void *value1=fn_80065D88(value0);
 fn_80065924(value0,lbl_804E23E4,1);
 void *value2=fn_800658E4(value0,value1);
 void *value3=fn_80336C10();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 fn_800659C0(value0,lbl_804E23E8,lbl_804E23EC,lbl_804E23F0,value1);
}
}
#pragma pop
