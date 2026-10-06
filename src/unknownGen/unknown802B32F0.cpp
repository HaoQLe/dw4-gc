#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800635C8(void *,void *,void *,int);
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
extern char lbl_8041CA68[];
extern char lbl_804CEDD8[];
extern char lbl_804CEDDC[];
extern char lbl_804CEDE0[];
extern char lbl_804CEDE4[];
extern char lbl_804CEDE8[];
extern char lbl_804CEDF4[];
extern void *lbl_80534550;
extern void *lbl_80534558;
}
extern "C" {
void fn_802B32F0(){
 void *meta=lbl_80534550;
 void *field=fn_80065D88(meta);
 fn_80065924(meta,lbl_804CEDD8,0x1);
 fn_800659C0(meta,lbl_804CEDDC,lbl_804CEDE0,lbl_804CEDE4,field);
}
void *fn_802B3370(){
 if(!lbl_80534558) lbl_80534558=fn_800635C8(lbl_8041CA68,lbl_804CEDE8,lbl_804CEDF4,0x3);
 return lbl_80534558;
}
}
#pragma pop
