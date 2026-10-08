#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800658E4(void *,void *);
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
void *fn_801ADB98();
extern char lbl_804D00C8[];
extern char lbl_804D00D8[];
extern char lbl_804D00E8[];
extern char lbl_804D00F8[];
extern void *lbl_80534A90;
}
extern "C" {
void fn_802C1D78(){
 void *value0=lbl_80534A90;
 void *value1=fn_80065D88(value0);
 fn_80065924(value0,lbl_804D00C8,4);
 void *value2=fn_800658E4(value0,value1);
 void *value3=fn_801ADB98();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 void *value4=fn_800658E4(value0,(reinterpret_cast<char *>(value1)+1));
 void *value5=fn_801ADB98();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value4)+56)=value5;
 fn_800659C0(value0,lbl_804D00D8,lbl_804D00E8,lbl_804D00F8,value1);
}
}
#pragma pop
