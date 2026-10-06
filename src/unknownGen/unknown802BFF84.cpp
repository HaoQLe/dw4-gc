#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
extern char lbl_804CFE14[];
extern char lbl_804CFE28[];
extern char lbl_804CFE3C[];
extern char lbl_804CFE50[];
extern void *lbl_805349D8;
}
extern "C" {
void fn_802BFF84(){
 void *meta=lbl_805349D8;
 void *field=fn_80065D88(meta);
 fn_80065924(meta,lbl_804CFE14,0x5);
 fn_800659C0(meta,lbl_804CFE28,lbl_804CFE3C,lbl_804CFE50,field);
}
}
#pragma pop
