#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800635C8(void *,void *,void *,int);
extern char lbl_8041CA68[];
extern char lbl_804D25C0[];
extern char lbl_804D25C4[];
extern void *lbl_805354C0;
}
extern "C" {
void *fn_802DE390(){
 if(!lbl_805354C0) lbl_805354C0=fn_800635C8(lbl_8041CA68,lbl_804D25C0,lbl_804D25C4,0x1);
 return lbl_805354C0;
}
}
#pragma pop
