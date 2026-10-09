#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8004D4BC(void *,float);
void *fn_800658E4(void *,void *);
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
extern char lbl_8041E6AC[];
extern char lbl_804D0C58[];
extern char lbl_804D0C7C[];
extern char lbl_804D0CA0[];
extern char lbl_804D0CC4[];
extern void *lbl_80534DC4;
}
extern "C" {
void beModelCtrlMoveObject_fieldInit(){
 void *value0=lbl_80534DC4;
 void *value1=fn_80065D88(value0);
 fn_80065924(value0,lbl_804D0C58,9);
 void *value2=fn_800658E4(value0,(reinterpret_cast<char *>(value1)+1));
 fn_8004D4BC(value2,*reinterpret_cast<float *>((lbl_8041E6AC+0)));
 void *value3=fn_800658E4(value0,(reinterpret_cast<char *>(value1)+3));
 fn_8004D4BC(value3,*reinterpret_cast<float *>((lbl_8041E6AC+0)));
 void *value4=fn_800658E4(value0,(reinterpret_cast<char *>(value1)+4));
 fn_8004D4BC(value4,*reinterpret_cast<float *>((lbl_8041E6AC+0)));
 void *value5=fn_800658E4(value0,(reinterpret_cast<char *>(value1)+5));
 fn_8004D4BC(value5,*reinterpret_cast<float *>((lbl_8041E6AC+0)));
 fn_800659C0(value0,lbl_804D0C7C,lbl_804D0CA0,lbl_804D0CC4,value1);
}
}
#pragma pop
