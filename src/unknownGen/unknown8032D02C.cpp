#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80036C40();
void *fn_800658E4(void *,void *);
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
extern char lbl_804E1BE0[];
extern char lbl_804E1BE4[];
extern char lbl_804E1BE8[];
extern char lbl_804E1BEC[];
extern void *lbl_80535E2C;
}
extern "C" {
void fn_8032D02C(){
 void *value0=lbl_80535E2C;
 void *value1=fn_80065D88(value0);
 fn_80065924(value0,lbl_804E1BE0,1);
 void *value2=fn_800658E4(value0,value1);
 void *value3=fn_80036C40();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value2)+52)=1;
 fn_800659C0(value0,lbl_804E1BE4,lbl_804E1BE8,lbl_804E1BEC,value1);
}
}
#pragma pop
