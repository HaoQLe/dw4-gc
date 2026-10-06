#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
extern char lbl_804E1D44[];
extern char lbl_804E1D48[];
extern char lbl_804E1D4C[];
extern char lbl_804E1D50[];
extern void *lbl_80535EA0;
}
extern "C" {
void fn_8032F554(){
 void *meta=lbl_80535EA0;
 void *field=fn_80065D88(meta);
 fn_80065924(meta,lbl_804E1D44,0x1);
 fn_800659C0(meta,lbl_804E1D48,lbl_804E1D4C,lbl_804E1D50,field);
}
}
#pragma pop
