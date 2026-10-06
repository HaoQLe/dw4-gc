#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800635C8(void *,void *,void *,int);
void *fn_80208234();
extern char lbl_804AAFB8[];
extern void *lbl_805646C8;
}
extern "C" {
void *fn_801AB984(){return fn_80208234();}
void *fn_801AB9A4(){
 char *data=lbl_804AAFB8;
 if(!lbl_805646C8) lbl_805646C8=fn_800635C8(data+0x738,data+0x718,data+0x728,0x4);
 return lbl_805646C8;
}
}
#pragma pop
