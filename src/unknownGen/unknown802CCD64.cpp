#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800635C8(void *,void *,void *,int);
extern char lbl_8041CA68[];
extern char lbl_804D1084[];
extern char lbl_804D1108[];
extern void *lbl_80534F48;
}
extern "C" {
void *fn_802CCD64(){
 if(!lbl_80534F48) lbl_80534F48=fn_800635C8(lbl_8041CA68,lbl_804D1084,lbl_804D1108,0x21);
 return lbl_80534F48;
}
}
#pragma pop
