#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
extern char lbl_804E3904[];
extern char lbl_804E3918[];
extern char lbl_804E392C[];
extern char lbl_804E3940[];
extern void *lbl_80536604;
}
extern "C" {
void fn_80340254(){
 void *meta=lbl_80536604;
 void *field=fn_80065D88(meta);
 fn_80065924(meta,lbl_804E3904,0x5);
 fn_800659C0(meta,lbl_804E3918,lbl_804E392C,lbl_804E3940,field);
}
}
#pragma pop
