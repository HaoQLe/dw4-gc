#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800658E4(void *,void *);
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
extern char lbl_804D2A18[];
extern char lbl_804D2A1C[];
extern char lbl_804D2A20[];
extern char lbl_804D2A24[];
extern void *lbl_80535604;
extern void *lbl_805622A4;
}
extern "C" {
void fn_802E1A9C(){
 void *value0=lbl_80535604;
 void *value1=fn_80065D88(value0);
 fn_80065924(value0,lbl_804D2A18,1);
 void *value2=fn_800658E4(value0,value1);
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=lbl_805622A4;
 fn_800659C0(value0,lbl_804D2A1C,lbl_804D2A20,lbl_804D2A24,value1);
}
}
#pragma pop
