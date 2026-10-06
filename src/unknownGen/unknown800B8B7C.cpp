#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800635C8(void *,void *,void *,int);
extern char lbl_80477D08[];
extern void *lbl_80562944;
}
extern "C" {
void *fn_800B8B7C(){
 char *data=lbl_80477D08;
 if(!lbl_80562944) lbl_80562944=fn_800635C8(data+0x1D04,data+0x1CDC,data+0x1CF0,0x5);
 return lbl_80562944;
}
}
#pragma pop
