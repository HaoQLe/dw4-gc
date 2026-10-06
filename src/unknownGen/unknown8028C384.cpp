#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800635C8(void *,void *,void *,int);
extern char lbl_804CC090[];
extern void *lbl_8056609C;
}
extern "C" {
void *fn_8028C384(){
 char *data=lbl_804CC090;
 if(!lbl_8056609C) lbl_8056609C=fn_800635C8(data+0x6C,data+0x54,data+0x60,0x3);
 return lbl_8056609C;
}
}
#pragma pop
