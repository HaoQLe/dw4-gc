#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
extern char lbl_804D2628[];
extern char lbl_804D2638[];
extern char lbl_804D2648[];
extern char lbl_804D2658[];
extern void *lbl_805354E4;
}
extern "C" {
void fn_802DEA94(){
 void *meta=lbl_805354E4;
 void *field=fn_80065D88(meta);
 fn_80065924(meta,lbl_804D2628,0x4);
 fn_800659C0(meta,lbl_804D2638,lbl_804D2648,lbl_804D2658,field);
}
}
#pragma pop
