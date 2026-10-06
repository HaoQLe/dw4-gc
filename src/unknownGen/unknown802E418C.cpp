#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
extern char lbl_804D2E54[];
extern char lbl_804D2E58[];
extern char lbl_804D2E5C[];
extern char lbl_804D2E60[];
extern void *lbl_8053571C;
}
extern "C" {
void fn_802E418C(){
 void *meta=lbl_8053571C;
 void *field=fn_80065D88(meta);
 fn_80065924(meta,lbl_804D2E54,0x1);
 fn_800659C0(meta,lbl_804D2E58,lbl_804D2E5C,lbl_804D2E60,field);
}
}
#pragma pop
