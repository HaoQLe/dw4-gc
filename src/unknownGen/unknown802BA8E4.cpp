#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800635C8(void *,void *,void *,int);
extern char lbl_8041CA68[];
extern char lbl_804CF768[];
extern char lbl_804CF784[];
extern void *lbl_805347E8;
}
extern "C" {
void *fn_802BA8E4(){
 if(!lbl_805347E8) lbl_805347E8=fn_800635C8(lbl_8041CA68,lbl_804CF768,lbl_804CF784,0x7);
 return lbl_805347E8;
}
}
#pragma pop
