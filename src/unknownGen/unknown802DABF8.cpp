#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80029A5C();
void *fn_800658E4(void *,void *);
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
void fn_80071694(void *,int);
extern char lbl_804D22A8[];
extern char lbl_804D22B0[];
extern char lbl_804D22B8[];
extern char lbl_804D22C0[];
extern void *lbl_805353CC;
}
extern "C" {
void fn_802DABF8(){
 void *value0=lbl_805353CC;
 void *value1=fn_80065D88(value0);
 fn_80065924(value0,lbl_804D22A8,2);
 void *value2=fn_800658E4(value0,value1);
 fn_80071694(value2,0);
 void *value3=fn_800658E4(value0,(reinterpret_cast<char *>(value1)+1));
 void *value4=fn_80029A5C();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value3)+56)=value4;
 fn_800659C0(value0,lbl_804D22B0,lbl_804D22B8,lbl_804D22C0,value1);
}
}
#pragma pop
