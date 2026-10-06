#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
extern char lbl_804D1044[];
extern char lbl_804D1048[];
extern char lbl_804D104C[];
extern char lbl_804D1050[];
extern void *lbl_80534F28;
}
extern "C" {
void fn_802CC470(){
 void *meta=lbl_80534F28;
 void *field=fn_80065D88(meta);
 fn_80065924(meta,lbl_804D1044,0x1);
 fn_800659C0(meta,lbl_804D1048,lbl_804D104C,lbl_804D1050,field);
}
}
#pragma pop
