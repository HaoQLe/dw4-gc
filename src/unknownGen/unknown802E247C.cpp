#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800635C8(void *,void *,void *,int);
extern char lbl_8041CA68[];
extern char lbl_804D2B40[];
extern char lbl_804D2B7C[];
extern void *lbl_8053565C;
}
extern "C" {
void *fn_802E247C(){
 if(!lbl_8053565C) lbl_8053565C=fn_800635C8(lbl_8041CA68,lbl_804D2B40,lbl_804D2B7C,0xF);
 return lbl_8053565C;
}
}
#pragma pop
