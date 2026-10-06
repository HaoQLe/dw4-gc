#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
extern char lbl_804E2074[];
extern char lbl_804E2080[];
extern char lbl_804E208C[];
extern char lbl_804E2098[];
extern void *lbl_80535F9C;
}
extern "C" {
void fn_80333DCC(){
 void *meta=lbl_80535F9C;
 void *field=fn_80065D88(meta);
 fn_80065924(meta,lbl_804E2074,0x3);
 fn_800659C0(meta,lbl_804E2080,lbl_804E208C,lbl_804E2098,field);
}
}
#pragma pop
