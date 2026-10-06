#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800635C8(void *,void *,void *,int);
extern char lbl_8049BC80[];
extern void *lbl_80563C08;
}
extern "C" {
void *fn_801340C8(){
 char *data=lbl_8049BC80;
 if(!lbl_80563C08) lbl_80563C08=fn_800635C8(data+0x990,data+0x950,data+0x970,0x8);
 return lbl_80563C08;
}
}
#pragma pop
