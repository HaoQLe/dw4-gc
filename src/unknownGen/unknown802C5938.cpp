#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
extern char lbl_804D05E8[];
extern char lbl_804D0600[];
extern char lbl_804D0618[];
extern char lbl_804D0630[];
extern void *lbl_80534C04;
}
extern "C" {
void fn_802C5938(){
 void *meta=lbl_80534C04;
 void *field=fn_80065D88(meta);
 fn_80065924(meta,lbl_804D05E8,0x6);
 fn_800659C0(meta,lbl_804D0600,lbl_804D0618,lbl_804D0630,field);
}
}
#pragma pop
