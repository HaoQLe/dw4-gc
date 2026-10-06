#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
extern char lbl_804D05C8[];
extern char lbl_804D05D0[];
extern char lbl_804D05D8[];
extern char lbl_804D05E0[];
extern void *lbl_80534BF8;
}
extern "C" {
void fn_802C571C(){
 void *meta=lbl_80534BF8;
 void *field=fn_80065D88(meta);
 fn_80065924(meta,lbl_804D05C8,0x2);
 fn_800659C0(meta,lbl_804D05D0,lbl_804D05D8,lbl_804D05E0,field);
}
}
#pragma pop
