#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800635C8(void *,void *,void *,int);
extern char lbl_8041CA68[];
extern char lbl_804CF448[];
extern char lbl_804CF450[];
extern void *lbl_8053471C;
}
extern "C" {
void *fn_802B7D14(){
 if(!lbl_8053471C) lbl_8053471C=fn_800635C8(lbl_8041CA68,lbl_804CF448,lbl_804CF450,0x2);
 return lbl_8053471C;
}
}
#pragma pop
