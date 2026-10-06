#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800635C8(void *,void *,void *,int);
extern char lbl_80453438[];
extern char lbl_804E3514[];
extern char lbl_804E3534[];
extern void *lbl_80536500;
}
extern "C" {
void *fn_8033E504(){
 if(!lbl_80536500) lbl_80536500=fn_800635C8(lbl_80453438,lbl_804E3514,lbl_804E3534,0x8);
 return lbl_80536500;
}
}
#pragma pop
