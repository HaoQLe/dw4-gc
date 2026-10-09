#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800658E4(void *,void *);
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
void *fn_802D9014();
extern char lbl_804D1FA0[];
extern char lbl_804D1FA4[];
extern char lbl_804D1FA8[];
extern char lbl_804D1FAC[];
extern void *lbl_80535310;
}
extern "C" {
void beFontInfo_fieldInit(){
 void *value0=lbl_80535310;
 void *value1=fn_80065D88(value0);
 fn_80065924(value0,lbl_804D1FA0,1);
 void *value2=fn_800658E4(value0,value1);
 void *value3=fn_802D9014();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 fn_800659C0(value0,lbl_804D1FA4,lbl_804D1FA8,lbl_804D1FAC,value1);
}
}
#pragma pop
