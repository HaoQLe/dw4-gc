#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
extern char lbl_804D3138[];
extern char lbl_804D3144[];
extern char lbl_804D3150[];
extern char lbl_804D315C[];
extern void *lbl_805357FC;
}
extern "C" {
void fn_802E69FC(){
 void *meta=lbl_805357FC;
 void *field=fn_80065D88(meta);
 fn_80065924(meta,lbl_804D3138,0x3);
 fn_800659C0(meta,lbl_804D3144,lbl_804D3150,lbl_804D315C,field);
}
}
#pragma pop
