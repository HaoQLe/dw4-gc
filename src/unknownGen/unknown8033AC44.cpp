#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80053650(void *,int);
void *fn_800658E4(void *,void *);
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
void *fn_8034382C();
extern char lbl_804E2A44[];
extern char lbl_804E2A64[];
extern char lbl_804E2A84[];
extern char lbl_804E2AA4[];
extern void *lbl_80536204;
}
extern "C" {
void fn_8033AC44(){
 void *value0=lbl_80536204;
 void *value1=fn_80065D88(value0);
 fn_80065924(value0,lbl_804E2A44,8);
 void *value2=fn_800658E4(value0,(reinterpret_cast<char *>(value1)+1));
 void *value3=fn_8034382C();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 void *value4=fn_800658E4(value0,(reinterpret_cast<char *>(value1)+4));
 fn_80053650(value4,-1);
 fn_800659C0(value0,lbl_804E2A64,lbl_804E2A84,lbl_804E2AA4,value1);
}
}
#pragma pop
