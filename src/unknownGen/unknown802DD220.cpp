#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
extern char lbl_804D248C[];
extern char lbl_804D2490[];
extern char lbl_804D2494[];
extern char lbl_804D2498[];
extern void *lbl_80535468;
}
extern "C" {
void fn_802DD220(){
 void *meta=lbl_80535468;
 void *field=fn_80065D88(meta);
 fn_80065924(meta,lbl_804D248C,0x1);
 fn_800659C0(meta,lbl_804D2490,lbl_804D2494,lbl_804D2498,field);
}
}
#pragma pop
