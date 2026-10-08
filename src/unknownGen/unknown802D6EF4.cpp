#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800658E4(void *,void *);
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
void *fn_802D69B0();
extern char lbl_804D1D88[];
extern char lbl_804D1D8C[];
extern char lbl_804D1D90[];
extern char lbl_804D1D94[];
extern void *lbl_80535280;
}
extern "C" {
void fn_802D6EF4(){
 void *value0=lbl_80535280;
 void *value1=fn_80065D88(value0);
 fn_80065924(value0,lbl_804D1D88,1);
 void *value2=fn_800658E4(value0,value1);
 void *value3=fn_802D69B0();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 fn_800659C0(value0,lbl_804D1D8C,lbl_804D1D90,lbl_804D1D94,value1);
}
}
#pragma pop
