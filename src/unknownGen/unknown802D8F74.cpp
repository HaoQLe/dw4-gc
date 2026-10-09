#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800658E4(void *,void *);
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
void *fn_801C89F0();
extern char lbl_804D1FB8[];
extern char lbl_804D1FD4[];
extern char lbl_804D1FF0[];
extern char lbl_804D200C[];
extern void *lbl_80535318;
}
extern "C" {
void beFontInfoData_fieldInit(){
 void *value0=lbl_80535318;
 void *value1=fn_80065D88(value0);
 fn_80065924(value0,lbl_804D1FB8,7);
 void *value2=fn_800658E4(value0,value1);
 void *value3=fn_801C89F0();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 fn_800659C0(value0,lbl_804D1FD4,lbl_804D1FF0,lbl_804D200C,value1);
}
}
#pragma pop
