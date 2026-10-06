#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
extern char lbl_804D0EF4[];
extern char lbl_804D0F00[];
extern char lbl_804D0F0C[];
extern char lbl_804D0F18[];
extern void *lbl_80534EA0;
}
extern "C" {
void fn_802CAABC(){
 void *meta=lbl_80534EA0;
 void *field=fn_80065D88(meta);
 fn_80065924(meta,lbl_804D0EF4,0x3);
 fn_800659C0(meta,lbl_804D0F00,lbl_804D0F0C,lbl_804D0F18,field);
}
}
#pragma pop
