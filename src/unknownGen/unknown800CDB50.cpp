#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800635C8(void *,void *,void *,int);
extern char lbl_80480EC0[];
extern void *lbl_80562C84;
}
extern "C" {
void *fn_800CDB50(){
 char *data=lbl_80480EC0;
 if(!lbl_80562C84) lbl_80562C84=fn_800635C8(data+0x1E4,data+0x194,data+0x1BC,0xA);
 return lbl_80562C84;
}
}
#pragma pop
