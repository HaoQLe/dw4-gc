#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800635C8(void *,void *,void *,int);
extern char lbl_804AAFB8[];
extern void *lbl_805652D4;
}
extern "C" {
void *fn_801C7540(){
 char *data=lbl_804AAFB8;
 if(!lbl_805652D4) lbl_805652D4=fn_800635C8(data+0x6500,data+0x64E0,data+0x64F0,0x4);
 return lbl_805652D4;
}
}
#pragma pop
