#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800635C8(void *,void *,void *,int);
extern char lbl_804AAFB8[];
extern void *lbl_80565450;
}
extern "C" {
void *fn_801CA7D0(){
 char *data=lbl_804AAFB8;
 if(!lbl_80565450) lbl_80565450=fn_800635C8(data+0x70AC,data+0x708C,data+0x709C,0x4);
 return lbl_80565450;
}
}
#pragma pop
