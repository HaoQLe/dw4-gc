#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
extern char lbl_804E38D4[];
extern char lbl_804E38D8[];
extern char lbl_804E38DC[];
extern char lbl_804E38E0[];
extern void *lbl_805365EC;
}
extern "C" {
void fn_8033FD20(){
 void *meta=lbl_805365EC;
 void *field=fn_80065D88(meta);
 fn_80065924(meta,lbl_804E38D4,0x1);
 fn_800659C0(meta,lbl_804E38D8,lbl_804E38DC,lbl_804E38E0,field);
}
}
#pragma pop
