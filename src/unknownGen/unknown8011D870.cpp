#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800635C8(void *,void *,void *,int);
extern char lbl_804981F0[];
extern void *lbl_805638C0;
}
extern "C" {
void *fn_8011D870(){
 char *data=lbl_804981F0;
 if(!lbl_805638C0) lbl_805638C0=fn_800635C8(data+0x588,data+0x548,data+0x568,0x8);
 return lbl_805638C0;
}
}
#pragma pop
