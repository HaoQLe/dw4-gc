#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
extern char lbl_804D0FA4[];
extern char lbl_804D0FAC[];
extern char lbl_804D0FB4[];
extern char lbl_804D0FBC[];
extern void *lbl_80534EE4;
}
extern "C" {
void fn_802CB74C(){
 void *meta=lbl_80534EE4;
 void *field=fn_80065D88(meta);
 fn_80065924(meta,lbl_804D0FA4,0x2);
 fn_800659C0(meta,lbl_804D0FAC,lbl_804D0FB4,lbl_804D0FBC,field);
}
}
#pragma pop
