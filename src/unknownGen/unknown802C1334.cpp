#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
extern char lbl_804D0048[];
extern char lbl_804D004C[];
extern char lbl_804D0050[];
extern char lbl_804D0054[];
extern void *lbl_80534A6C;
}
extern "C" {
void fn_802C1334(){
 void *meta=lbl_80534A6C;
 void *field=fn_80065D88(meta);
 fn_80065924(meta,lbl_804D0048,0x1);
 fn_800659C0(meta,lbl_804D004C,lbl_804D0050,lbl_804D0054,field);
}
}
#pragma pop
