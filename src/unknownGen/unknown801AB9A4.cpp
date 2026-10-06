#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800635C8(void *,void *,void *,int);
extern char lbl_804AAFB8[];
extern void *lbl_805646C8;
extern void *lbl_805646CC;
}
extern "C" {
void *fn_801AB9A4(){
 char *data=lbl_804AAFB8;
 if(!lbl_805646C8) lbl_805646C8=fn_800635C8(data+0x738,data+0x718,data+0x728,0x4);
 return lbl_805646C8;
}
void *fn_801AB9F0(){
 char *data=lbl_804AAFB8;
 if(!lbl_805646CC) lbl_805646CC=fn_800635C8(data+0x7A0,data+0x780,data+0x790,0x4);
 return lbl_805646CC;
}
}
#pragma pop
