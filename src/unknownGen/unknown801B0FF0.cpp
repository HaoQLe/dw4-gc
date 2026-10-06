#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800635C8(void *,void *,void *,int);
extern char lbl_804AAFB8[];
extern void *lbl_805648E4;
}
extern "C" {
void *fn_801B0FF0(){
 char *data=lbl_804AAFB8;
 if(!lbl_805648E4) lbl_805648E4=fn_800635C8(data+0x1AD4,data+0x1AB4,data+0x1AC4,0x4);
 return lbl_805648E4;
}
}
#pragma pop
