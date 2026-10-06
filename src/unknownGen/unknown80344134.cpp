#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800635C8(void *,void *,void *,int);
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
extern char lbl_80453438[];
extern char lbl_80455484[];
extern char lbl_804E3E08[];
extern char lbl_804E3E54[];
extern char lbl_804E3EA0[];
extern char lbl_804E3EEC[];
extern char lbl_804E3F38[];
extern char lbl_804E3F90[];
extern char lbl_804E3FE8[];
extern char lbl_804E4040[];
extern void *lbl_80536798;
extern void *lbl_805367E8;
extern void *lbl_805367EC;
}
extern "C" {
void fn_80344134(){
 void *meta=lbl_80536798;
 void *field=fn_80065D88(meta);
 fn_80065924(meta,lbl_804E3E08,0x13);
 fn_800659C0(meta,lbl_804E3E54,lbl_804E3EA0,lbl_804E3EEC,field);
}
void *fn_803441B4(){
 if(!lbl_805367E8) lbl_805367E8=fn_800635C8(lbl_80455484,lbl_804E3F38,lbl_804E3F90,0x16);
 return lbl_805367E8;
}
void *fn_80344214(){
 if(!lbl_805367EC) lbl_805367EC=fn_800635C8(lbl_80453438,lbl_804E3FE8,lbl_804E4040,0x16);
 return lbl_805367EC;
}
}
#pragma pop
