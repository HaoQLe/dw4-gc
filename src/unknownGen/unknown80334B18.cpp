#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
extern char lbl_804E213C[];
extern char lbl_804E2140[];
extern char lbl_804E2144[];
extern char lbl_804E2148[];
extern void *lbl_80535FD4;
}
extern "C" {
void fn_80334B18(){
 void *meta=lbl_80535FD4;
 void *field=fn_80065D88(meta);
 fn_80065924(meta,lbl_804E213C,0x1);
 fn_800659C0(meta,lbl_804E2140,lbl_804E2144,lbl_804E2148,field);
}
}
#pragma pop
