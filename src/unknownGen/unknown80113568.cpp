#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800635C8(void *,void *,void *,int);
extern char lbl_80494570[];
extern void *lbl_805637D4;
}
extern "C" {
void *fn_80113568(){
 char *data=lbl_80494570;
 if(!lbl_805637D4) lbl_805637D4=fn_800635C8(data+0xEE4,data+0xEC4,data+0xED4,0x4);
 return lbl_805637D4;
}
}
#pragma pop
