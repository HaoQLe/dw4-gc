#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
extern char lbl_804E418C[];
extern char lbl_804E4190[];
extern char lbl_804E4194[];
extern char lbl_804E4198[];
extern void *lbl_80536838;
}
extern "C" {
void fn_80345470(){
 void *meta=lbl_80536838;
 void *field=fn_80065D88(meta);
 fn_80065924(meta,lbl_804E418C,0x1);
 fn_800659C0(meta,lbl_804E4190,lbl_804E4194,lbl_804E4198,field);
}
}
#pragma pop
