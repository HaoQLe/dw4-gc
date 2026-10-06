#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
extern char lbl_804D0F84[];
extern char lbl_804D0F8C[];
extern char lbl_804D0F94[];
extern char lbl_804D0F9C[];
extern void *lbl_80534ED8;
}
extern "C" {
void fn_802CB4A0(){
 void *meta=lbl_80534ED8;
 void *field=fn_80065D88(meta);
 fn_80065924(meta,lbl_804D0F84,0x2);
 fn_800659C0(meta,lbl_804D0F8C,lbl_804D0F94,lbl_804D0F9C,field);
}
}
#pragma pop
