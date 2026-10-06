#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800635C8(void *,void *,void *,int);
extern char lbl_804AAFB8[];
extern void *lbl_80565064;
extern void *lbl_80565068;
}
extern "C" {
void *fn_801C2F7C(){
 char *data=lbl_804AAFB8;
 if(!lbl_80565064) lbl_80565064=fn_800635C8(data+0x520C,data+0x51DC,data+0x51F4,0x6);
 return lbl_80565064;
}
void *fn_801C2FC8(){
 char *data=lbl_804AAFB8;
 if(!lbl_80565068) lbl_80565068=fn_800635C8(data+0x5254,data+0x523C,data+0x5248,0x3);
 return lbl_80565068;
}
}
#pragma pop
