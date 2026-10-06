#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
extern char lbl_804CF7E8[];
extern char lbl_804CF7F0[];
extern char lbl_804CF7F8[];
extern char lbl_804CF800[];
extern void *lbl_80534808;
}
extern "C" {
void fn_802BB570(){
 void *meta=lbl_80534808;
 void *field=fn_80065D88(meta);
 fn_80065924(meta,lbl_804CF7E8,0x2);
 fn_800659C0(meta,lbl_804CF7F0,lbl_804CF7F8,lbl_804CF800,field);
}
}
#pragma pop
