#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80029A5C();
void *fn_800658E4(void *,void *);
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
extern char lbl_804CD980[];
extern char lbl_804CD984[];
extern char lbl_804CD988[];
extern char lbl_804CD98C[];
extern void *lbl_80534368;
}
extern "C" {
void fn_802AB14C(){
 void *value0=lbl_80534368;
 void *value1=fn_80065D88(value0);
 fn_80065924(value0,lbl_804CD980,1);
 void *value2=fn_800658E4(value0,value1);
 void *value3=fn_80029A5C();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 fn_800659C0(value0,lbl_804CD984,lbl_804CD988,lbl_804CD98C,value1);
}
}
#pragma pop
