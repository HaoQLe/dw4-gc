#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800635C8(void *,void *,void *,int);
extern char lbl_8047EC18[];
extern void *lbl_80562B9C;
}
extern "C" {
void *fn_800CB0B4(){
 char *data=lbl_8047EC18;
 if(!lbl_80562B9C) lbl_80562B9C=fn_800635C8(data+0x72C,data+0x3E4,data+0x588,0x69);
 return lbl_80562B9C;
}
}
#pragma pop
