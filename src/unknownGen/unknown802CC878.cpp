#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
extern char lbl_804D1054[];
extern char lbl_804D1058[];
extern char lbl_804D105C[];
extern char lbl_804D1060[];
extern void *lbl_80534F34;
}
extern "C" {
void fn_802CC878(){
 void *meta=lbl_80534F34;
 void *field=fn_80065D88(meta);
 fn_80065924(meta,lbl_804D1054,0x1);
 fn_800659C0(meta,lbl_804D1058,lbl_804D105C,lbl_804D1060,field);
}
}
#pragma pop
