#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800635C8(void *,void *,void *,int);
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
extern char lbl_80453438[];
extern char lbl_804E20A4[];
extern char lbl_804E20A8[];
extern char lbl_804E20AC[];
extern char lbl_804E20B0[];
extern char lbl_804E20B4[];
extern char lbl_804E20D0[];
extern void *lbl_80535FAC;
extern void *lbl_80535FB4;
}
extern "C" {
void fn_80333FA4(){
 void *meta=lbl_80535FAC;
 void *field=fn_80065D88(meta);
 fn_80065924(meta,lbl_804E20A4,0x1);
 fn_800659C0(meta,lbl_804E20A8,lbl_804E20AC,lbl_804E20B0,field);
}
void *fn_80334024(){
 if(!lbl_80535FB4) lbl_80535FB4=fn_800635C8(lbl_80453438,lbl_804E20B4,lbl_804E20D0,0x7);
 return lbl_80535FB4;
}
}
#pragma pop
