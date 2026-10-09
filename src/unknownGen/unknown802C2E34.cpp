#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80053650(void *,int);
void *fn_800658E4(void *,void *);
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
extern char lbl_804D0350[];
extern char lbl_804D035C[];
extern char lbl_804D0368[];
extern char lbl_804D0374[];
extern void *lbl_80534B38;
}
extern "C" {
void beNumberCtrlInfoWork_fieldInit(){
 void *value0=lbl_80534B38;
 void *value1=fn_80065D88(value0);
 fn_80065924(value0,lbl_804D0350,3);
 void *value2=fn_800658E4(value0,value1);
 fn_80053650(value2,-1);
 void *value3=fn_800658E4(value0,(reinterpret_cast<char *>(value1)+1));
 fn_80053650(value3,-1);
 void *value4=fn_800658E4(value0,(reinterpret_cast<char *>(value1)+2));
 fn_80053650(value4,-1);
 fn_800659C0(value0,lbl_804D035C,lbl_804D0368,lbl_804D0374,value1);
}
}
#pragma pop
