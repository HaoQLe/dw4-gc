#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800658E4(void *,void *);
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
void *fn_802D1C20();
extern char lbl_804D1830[];
extern char lbl_804D1834[];
extern char lbl_804D1838[];
extern char lbl_804D183C[];
extern void *lbl_80535100;
}
extern "C" {
void beLuaInfo_fieldInit(){
 void *value0=lbl_80535100;
 void *value1=fn_80065D88(value0);
 fn_80065924(value0,lbl_804D1830,1);
 void *value2=fn_800658E4(value0,value1);
 void *value3=fn_802D1C20();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value2)+52)=1;
 fn_800659C0(value0,lbl_804D1834,lbl_804D1838,lbl_804D183C,value1);
}
}
#pragma pop
