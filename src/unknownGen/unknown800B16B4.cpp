#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800635C8(void *,void *,void *,int);
extern char lbl_80477D08[];
extern void *lbl_80562654;
}
extern "C" {
void *fn_800B16B4(){
 char *data=lbl_80477D08;
 if(!lbl_80562654) lbl_80562654=fn_800635C8(data+0xDD0,data+0xDB8,data+0xDC4,0x3);
 return lbl_80562654;
}
}
#pragma pop
