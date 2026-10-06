#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800635C8(void *,void *,void *,int);
extern char lbl_8049BC80[];
extern void *lbl_80564500;
}
extern "C" {
void *fn_80151534(){
 char *data=lbl_8049BC80;
 if(!lbl_80564500) lbl_80564500=fn_800635C8(data+0x4388,data+0x4370,data+0x437C,0x3);
 return lbl_80564500;
}
}
#pragma pop
