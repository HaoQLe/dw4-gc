#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
extern char lbl_804D2C98[];
extern char lbl_804D2C9C[];
extern char lbl_804D2CA0[];
extern char lbl_804D2CA4[];
extern void *lbl_80535698;
}
extern "C" {
void fn_802E2BB4(){
 void *meta=lbl_80535698;
 void *field=fn_80065D88(meta);
 fn_80065924(meta,lbl_804D2C98,0x1);
 fn_800659C0(meta,lbl_804D2C9C,lbl_804D2CA0,lbl_804D2CA4,field);
}
}
#pragma pop
