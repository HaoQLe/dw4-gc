#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800658E4(void *,void *);
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
void fn_80071694(void *,int);
extern char lbl_804CF148[];
extern char lbl_804CF158[];
extern char lbl_804CF168[];
extern char lbl_804CF178[];
extern void *lbl_8053464C;
}
extern "C" {
void beTimerData_fieldInit(){
 void *value0=lbl_8053464C;
 void *value1=fn_80065D88(value0);
 fn_80065924(value0,lbl_804CF148,4);
 void *value2=fn_800658E4(value0,(reinterpret_cast<char *>(value1)+1));
 fn_80071694(value2,0);
 void *value3=fn_800658E4(value0,(reinterpret_cast<char *>(value1)+2));
 fn_80071694(value3,0);
 fn_800659C0(value0,lbl_804CF158,lbl_804CF168,lbl_804CF178,value1);
}
}
#pragma pop
