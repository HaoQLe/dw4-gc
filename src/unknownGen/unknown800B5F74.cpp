#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800635C8(void *,void *,void *,int);
extern char lbl_80477D08[];
extern void *lbl_80562838;
}
extern "C" {
void *fn_800B5F74(){
 char *data=lbl_80477D08;
 if(!lbl_80562838) lbl_80562838=fn_800635C8(data+0x17E0,data+0x17C8,data+0x17D4,0x3);
 return lbl_80562838;
}
}
#pragma pop
