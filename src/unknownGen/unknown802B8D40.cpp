#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80053650(void *,int);
void *fn_800658E4(void *,void *);
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
void fn_800711A8(void *,int);
extern char lbl_804CF4E0[];
extern char lbl_804CF4F8[];
extern char lbl_804CF510[];
extern char lbl_804CF528[];
extern void *lbl_80534754;
}
extern "C" {
void beSoundData_fieldInit(){
 void *value0=lbl_80534754;
 void *value1=fn_80065D88(value0);
 fn_80065924(value0,lbl_804CF4E0,6);
 void *value2=fn_800658E4(value0,value1);
 fn_800711A8(value2,-1);
 void *value3=fn_800658E4(value0,(reinterpret_cast<char *>(value1)+1));
 fn_800711A8(value3,-1);
 void *value4=fn_800658E4(value0,(reinterpret_cast<char *>(value1)+2));
 fn_80053650(value4,-1);
 void *value5=fn_800658E4(value0,(reinterpret_cast<char *>(value1)+3));
 fn_800711A8(value5,1);
 fn_800659C0(value0,lbl_804CF4F8,lbl_804CF510,lbl_804CF528,value1);
}
}
#pragma pop
