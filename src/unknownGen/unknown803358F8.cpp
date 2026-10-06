#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800635C8(void *,void *,void *,int);
extern char lbl_80453438[];
extern char lbl_804E22C0[];
extern char lbl_804E22DC[];
extern void *lbl_80536050;
}
extern "C" {
void *fn_803358F8(){
 if(!lbl_80536050) lbl_80536050=fn_800635C8(lbl_80453438,lbl_804E22C0,lbl_804E22DC,0x7);
 return lbl_80536050;
}
}
#pragma pop
