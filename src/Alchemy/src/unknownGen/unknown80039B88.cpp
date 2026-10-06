#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800635C8(void *,void *,void *,int);
extern char lbl_80463100[];
extern void *lbl_80561FAC;
}
extern "C" {
void *fn_80039B88(){
 char *data=lbl_80463100;
 if(!lbl_80561FAC) lbl_80561FAC=fn_800635C8(data+0x4A88,data+0x5154,data+0x5164,0x4);
 return lbl_80561FAC;
}
}
#pragma pop
