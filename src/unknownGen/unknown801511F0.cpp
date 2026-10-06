#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800635C8(void *,void *,void *,int);
extern char lbl_8049BC80[];
extern void *lbl_805644F0;
}
extern "C" {
void *fn_801511F0(){
 char *data=lbl_8049BC80;
 if(!lbl_805644F0) lbl_805644F0=fn_800635C8(data+0x430C,data+0x42EC,data+0x42FC,0x4);
 return lbl_805644F0;
}
}
#pragma pop
