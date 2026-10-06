#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
extern char lbl_804D25C8[];
extern char lbl_804D25E0[];
extern char lbl_804D25F8[];
extern char lbl_804D2610[];
extern void *lbl_805354C8;
}
extern "C" {
void fn_802DE838(){
 void *meta=lbl_805354C8;
 void *field=fn_80065D88(meta);
 fn_80065924(meta,lbl_804D25C8,0x6);
 fn_800659C0(meta,lbl_804D25E0,lbl_804D25F8,lbl_804D2610,field);
}
}
#pragma pop
