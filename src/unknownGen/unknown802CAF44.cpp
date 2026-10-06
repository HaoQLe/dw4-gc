#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
extern char lbl_804D0F74[];
extern char lbl_804D0F78[];
extern char lbl_804D0F7C[];
extern char lbl_804D0F80[];
extern void *lbl_80534EC8;
}
extern "C" {
void fn_802CAF44(){
 void *meta=lbl_80534EC8;
 void *field=fn_80065D88(meta);
 fn_80065924(meta,lbl_804D0F74,0x1);
 fn_800659C0(meta,lbl_804D0F78,lbl_804D0F7C,lbl_804D0F80,field);
}
}
#pragma pop
