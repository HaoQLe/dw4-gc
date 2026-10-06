#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800635C8(void *,void *,void *,int);
extern char lbl_804AAFB8[];
extern void *lbl_80564CB4;
extern void *lbl_80564CB8;
}
extern "C" {
void *fn_801B925C(){
 char *data=lbl_804AAFB8;
 if(!lbl_80564CB4) lbl_80564CB4=fn_800635C8(data+0x768,data+0x3730,data+0x373C,0x3);
 return lbl_80564CB4;
}
void *fn_801B92A8(){
 char *data=lbl_804AAFB8;
 if(!lbl_80564CB8) lbl_80564CB8=fn_800635C8(data+0x7A0,data+0x3754,data+0x3768,0x5);
 return lbl_80564CB8;
}
}
#pragma pop
