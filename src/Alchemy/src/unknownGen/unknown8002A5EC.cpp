#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800635C8(void *,void *,void *,int);
extern char lbl_80463100[];
extern void *lbl_805617B8;
}
extern "C" {
void *fn_8002A5EC(){
 char *data=lbl_80463100;
 if(!lbl_805617B8) lbl_805617B8=fn_800635C8(data+0x1674,data+0x1654,data+0x1664,0x4);
 return lbl_805617B8;
}
}
#pragma pop
