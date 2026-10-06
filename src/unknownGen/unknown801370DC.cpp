#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800635C8(void *,void *,void *,int);
extern char lbl_8049BC80[];
extern void *lbl_80563D18;
}
extern "C" {
void *fn_801370DC(){
 char *data=lbl_8049BC80;
 if(!lbl_80563D18) lbl_80563D18=fn_800635C8(data+0x1060,data+0x1038,data+0x104C,0x5);
 return lbl_80563D18;
}
}
#pragma pop
