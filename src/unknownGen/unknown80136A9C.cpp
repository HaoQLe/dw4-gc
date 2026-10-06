#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800635C8(void *,void *,void *,int);
extern char lbl_8049BC80[];
extern void *lbl_80563CE8;
}
extern "C" {
void *fn_80136A9C(){
 char *data=lbl_8049BC80;
 if(!lbl_80563CE8) lbl_80563CE8=fn_800635C8(data+0xEA4,data+0xE8C,data+0xE98,0x3);
 return lbl_80563CE8;
}
}
#pragma pop
