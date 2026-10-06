#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
extern char lbl_804D2E9C[];
extern char lbl_804D2EA0[];
extern char lbl_804D2EA4[];
extern char lbl_804D2EA8[];
extern void *lbl_8053573C;
}
extern "C" {
void fn_802E4D64(){
 void *meta=lbl_8053573C;
 void *field=fn_80065D88(meta);
 fn_80065924(meta,lbl_804D2E9C,0x1);
 fn_800659C0(meta,lbl_804D2EA0,lbl_804D2EA4,lbl_804D2EA8,field);
}
}
#pragma pop
