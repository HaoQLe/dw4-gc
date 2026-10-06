#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800635C8(void *,void *,void *,int);
extern char lbl_80463100[];
extern void *lbl_805614F4;
}
extern "C" {
void *fn_80023A70(){
 char *data=lbl_80463100;
 if(!lbl_805614F4) lbl_805614F4=fn_800635C8(data+0x174,data+0x144,data+0x15C,0x6);
 return lbl_805614F4;
}
}
#pragma pop
