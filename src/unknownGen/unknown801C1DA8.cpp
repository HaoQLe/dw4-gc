#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800635C8(void *,void *,void *,int);
extern char lbl_804AAFB8[];
extern void *lbl_80564FA0;
}
extern "C" {
void *fn_801C1DA8(){
 char *data=lbl_804AAFB8;
 if(!lbl_80564FA0) lbl_80564FA0=fn_800635C8(data+0x7A0,data+0x4B9C,data+0x4BB0,0x5);
 return lbl_80564FA0;
}
}
#pragma pop
