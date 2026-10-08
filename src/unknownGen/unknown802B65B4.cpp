#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800658E4(void *,void *);
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
void *fn_801C89F0();
extern char lbl_804CF1C0[];
extern char lbl_804CF1C4[];
extern char lbl_804CF1C8[];
extern char lbl_804CF1CC[];
extern void *lbl_80534670;
}
extern "C" {
void fn_802B65B4(){
 void *value0=lbl_80534670;
 void *value1=fn_80065D88(value0);
 fn_80065924(value0,lbl_804CF1C0,1);
 void *value2=fn_800658E4(value0,value1);
 void *value3=fn_801C89F0();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 fn_800659C0(value0,lbl_804CF1C4,lbl_804CF1C8,lbl_804CF1CC,value1);
}
}
#pragma pop
