#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800635C8(void *,void *,void *,int);
extern char lbl_80463100[];
extern void *lbl_80561EA8;
}
extern "C" {
void *fn_80039074(){
 char *data=lbl_80463100;
 if(!lbl_80561EA8) lbl_80561EA8=fn_800635C8(data+0x4A88,data+0x4A68,data+0x4A78,0x4);
 return lbl_80561EA8;
}
}
#pragma pop
