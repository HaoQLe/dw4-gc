#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
extern char lbl_804E1D6C[];
extern char lbl_804E1D74[];
extern char lbl_804E1D7C[];
extern char lbl_804E1D84[];
extern void *lbl_80535EB0;
}
extern "C" {
void fn_8032FDC4(){
 void *meta=lbl_80535EB0;
 void *field=fn_80065D88(meta);
 fn_80065924(meta,lbl_804E1D6C,0x2);
 fn_800659C0(meta,lbl_804E1D74,lbl_804E1D7C,lbl_804E1D84,field);
}
}
#pragma pop
