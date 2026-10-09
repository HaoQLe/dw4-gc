#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800658E4(void *,void *);
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
void *fn_802D2200();
extern char lbl_804D1850[];
extern char lbl_804D1854[];
extern char lbl_804D1858[];
extern char lbl_804D185C[];
extern void *lbl_8053510C;
}
extern "C" {
void beLuaData_fieldInit(){
 void *value0=lbl_8053510C;
 void *value1=fn_80065D88(value0);
 fn_80065924(value0,lbl_804D1850,1);
 void *value2=fn_800658E4(value0,value1);
 void *value3=fn_802D2200();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 fn_800659C0(value0,lbl_804D1854,lbl_804D1858,lbl_804D185C,value1);
}
}
#pragma pop
