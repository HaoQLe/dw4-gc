#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
extern char lbl_804D2714[];
extern char lbl_804D2744[];
extern char lbl_804D2774[];
extern char lbl_804D27A4[];
extern void *lbl_80535528;
}
extern "C" {
void fn_802DF564(){
 void *meta=lbl_80535528;
 void *field=fn_80065D88(meta);
 fn_80065924(meta,lbl_804D2714,0xC);
 fn_800659C0(meta,lbl_804D2744,lbl_804D2774,lbl_804D27A4,field);
}
}
#pragma pop
