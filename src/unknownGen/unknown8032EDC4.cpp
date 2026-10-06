#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
extern char lbl_804E1CE4[];
extern char lbl_804E1CF8[];
extern char lbl_804E1D0C[];
extern char lbl_804E1D20[];
extern void *lbl_80535E80;
}
extern "C" {
void fn_8032EDC4(){
 void *meta=lbl_80535E80;
 void *field=fn_80065D88(meta);
 fn_80065924(meta,lbl_804E1CE4,0x5);
 fn_800659C0(meta,lbl_804E1CF8,lbl_804E1D0C,lbl_804E1D20,field);
}
}
#pragma pop
