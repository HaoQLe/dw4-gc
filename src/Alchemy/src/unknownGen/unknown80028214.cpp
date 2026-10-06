#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800635C8(void *,void *,void *,int);
extern char lbl_80463100[];
extern void *lbl_805616C8;
}
extern "C" {
void *fn_80028214(){
 char *data=lbl_80463100;
 if(!lbl_805616C8) lbl_805616C8=fn_800635C8(data+0xF38,data+0xF20,data+0xF2C,0x3);
 return lbl_805616C8;
}
}
#pragma pop
