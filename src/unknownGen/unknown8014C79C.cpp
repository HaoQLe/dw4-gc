#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800635C8(void *,void *,void *,int);
extern char lbl_8049BC80[];
extern void *lbl_805643A0;
}
extern "C" {
void *fn_8014C79C(){
 char *data=lbl_8049BC80;
 if(!lbl_805643A0) lbl_805643A0=fn_800635C8(data+0x39F8,data+0x39E0,data+0x39EC,0x3);
 return lbl_805643A0;
}
}
#pragma pop
