#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800658E4(void *,void *);
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
void fn_80071694(void *,int);
extern char lbl_804D0310[];
extern char lbl_804D0320[];
extern char lbl_804D0330[];
extern char lbl_804D0340[];
extern void *lbl_80534B24;
}
extern "C" {
void beOptInfo_fieldInit(){
 void *value0=lbl_80534B24;
 void *value1=fn_80065D88(value0);
 fn_80065924(value0,lbl_804D0310,4);
 void *value2=fn_800658E4(value0,(reinterpret_cast<char *>(value1)+2));
 fn_80071694(value2,0);
 void *value3=fn_800658E4(value0,(reinterpret_cast<char *>(value1)+3));
 fn_80071694(value3,0);
 fn_800659C0(value0,lbl_804D0320,lbl_804D0330,lbl_804D0340,value1);
}
}
#pragma pop
