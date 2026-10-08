#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800658E4(void *,void *);
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
void *fn_802D3570();
extern char lbl_804D190C[];
extern char lbl_804D1910[];
extern char lbl_804D1914[];
extern char lbl_804D1918[];
extern void *lbl_80535150;
}
extern "C" {
void fn_802D34D0(){
 void *value0=lbl_80535150;
 void *value1=fn_80065D88(value0);
 fn_80065924(value0,lbl_804D190C,1);
 void *value2=fn_800658E4(value0,value1);
 void *value3=fn_802D3570();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 fn_800659C0(value0,lbl_804D1910,lbl_804D1914,lbl_804D1918,value1);
}
}
#pragma pop
