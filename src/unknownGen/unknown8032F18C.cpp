#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
extern char lbl_804E1D34[];
extern char lbl_804E1D38[];
extern char lbl_804E1D3C[];
extern char lbl_804E1D40[];
extern void *lbl_80535E98;
}
extern "C" {
void fn_8032F18C(){
 void *meta=lbl_80535E98;
 void *field=fn_80065D88(meta);
 fn_80065924(meta,lbl_804E1D34,0x1);
 fn_800659C0(meta,lbl_804E1D38,lbl_804E1D3C,lbl_804E1D40,field);
}
}
#pragma pop
