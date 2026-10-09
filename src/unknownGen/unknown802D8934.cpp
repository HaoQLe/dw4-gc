#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800658E4(void *,void *);
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
void *fn_802D2484();
extern char lbl_804D1F78[];
extern char lbl_804D1F80[];
extern char lbl_804D1F88[];
extern char lbl_804D1F90[];
extern void *lbl_80535304;
}
extern "C" {
void beGenerater_fieldInit(){
 void *value0=lbl_80535304;
 void *value1=fn_80065D88(value0);
 fn_80065924(value0,lbl_804D1F78,2);
 void *value2=fn_800658E4(value0,value1);
 void *value3=fn_802D2484();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value2)+60)=0;
 fn_800659C0(value0,lbl_804D1F80,lbl_804D1F88,lbl_804D1F90,value1);
}
}
#pragma pop
