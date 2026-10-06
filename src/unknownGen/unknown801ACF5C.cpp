#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800635C8(void *,void *,void *,int);
extern char lbl_804AAFB8[];
extern void *lbl_80564740;
}
extern "C" {
void *fn_801ACF5C(){
 char *data=lbl_804AAFB8;
 if(!lbl_80564740) lbl_80564740=fn_800635C8(data+0x7A0,data+0xBF4,data+0xC00,0x3);
 return lbl_80564740;
}
}
#pragma pop
