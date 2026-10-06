#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800635C8(void *,void *,void *,int);
extern char lbl_80463100[];
extern void *lbl_80561CFC;
}
extern "C" {
void *fn_80032C00(){
 char *data=lbl_80463100;
 if(!lbl_80561CFC) lbl_80561CFC=fn_800635C8(data+0x4204,data+0x41EC,data+0x41F8,0x3);
 return lbl_80561CFC;
}
}
#pragma pop
