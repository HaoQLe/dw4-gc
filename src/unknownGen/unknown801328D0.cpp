#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800635C8(void *,void *,void *,int);
extern char lbl_8049BC80[];
extern void *lbl_80563B78;
}
extern "C" {
void *fn_801328D0(){
 char *data=lbl_8049BC80;
 if(!lbl_80563B78) lbl_80563B78=fn_800635C8(data+0x45C,data+0x554,data+0x560,0x3);
 return lbl_80563B78;
}
}
#pragma pop
