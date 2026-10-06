#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800635C8(void *,void *,void *,int);
extern char lbl_80477D08[];
extern void *lbl_80562524;
}
extern "C" {
void *fn_800AEA70(){
 char *data=lbl_80477D08;
 if(!lbl_80562524) lbl_80562524=fn_800635C8(data+0x6D0,data+0x6B8,data+0x6C4,0x3);
 return lbl_80562524;
}
}
#pragma pop
