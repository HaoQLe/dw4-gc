#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
extern char lbl_804D2970[];
extern char lbl_804D2974[];
extern char lbl_804D2978[];
extern char lbl_804D297C[];
extern void *lbl_805355D8;
}
extern "C" {
void fn_802E13F8(){
 void *meta=lbl_805355D8;
 void *field=fn_80065D88(meta);
 fn_80065924(meta,lbl_804D2970,0x1);
 fn_800659C0(meta,lbl_804D2974,lbl_804D2978,lbl_804D297C,field);
}
}
#pragma pop
