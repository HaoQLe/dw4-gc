#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80028F84();
void *fn_800658E4(void *,void *);
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
extern char lbl_804E35A8[];
extern char lbl_804E35AC[];
extern char lbl_804E35B0[];
extern char lbl_804E35B4[];
extern void *lbl_80536518;
}
extern "C" {
void fn_8033EBC8(){
 void *value0=lbl_80536518;
 void *value1=fn_80065D88(value0);
 fn_80065924(value0,lbl_804E35A8,1);
 void *value2=fn_800658E4(value0,value1);
 void *value3=fn_80028F84();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 fn_800659C0(value0,lbl_804E35AC,lbl_804E35B0,lbl_804E35B4,value1);
}
}
#pragma pop
