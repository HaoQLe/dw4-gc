#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800635C8(void *,void *,void *,int);
extern char lbl_8049BC80[];
extern void *lbl_8056419C;
}
extern "C" {
void *fn_801468F8(){
 char *data=lbl_8049BC80;
 if(!lbl_8056419C) lbl_8056419C=fn_800635C8(data+0x2C8C,data+0x2C6C,data+0x2C7C,0x4);
 return lbl_8056419C;
}
}
#pragma pop
