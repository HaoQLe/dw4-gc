#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800635C8(void *,void *,void *,int);
extern char lbl_80453438[];
extern char lbl_804E2B04[];
extern char lbl_804E2B08[];
extern void *lbl_80536254;
}
extern "C" {
void *fn_8033BD44(){
 if(!lbl_80536254) lbl_80536254=fn_800635C8(lbl_80453438,lbl_804E2B04,lbl_804E2B08,0x1);
 return lbl_80536254;
}
}
#pragma pop
