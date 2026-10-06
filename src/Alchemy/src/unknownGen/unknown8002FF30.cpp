#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800635C8(void *,void *,void *,int);
extern char lbl_80463100[];
extern void *lbl_80561B34;
extern void *lbl_80561B38;
}
extern "C" {
void *fn_8002FF30(){
 char *data=lbl_80463100;
 if(!lbl_80561B34) lbl_80561B34=fn_800635C8(data+0x2C5C,data+0x2C44,data+0x2C50,0x3);
 return lbl_80561B34;
}
void *fn_8002FF7C(){
 char *data=lbl_80463100;
 if(!lbl_80561B38) lbl_80561B38=fn_800635C8(data+0x2D10,data+0x2CC8,data+0x2CEC,0x9);
 return lbl_80561B38;
}
}
#pragma pop
