#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800635C8(void *,void *,void *,int);
extern char lbl_8041CA68[];
extern char lbl_804D0010[];
extern char lbl_804D002C[];
extern void *lbl_80534A68;
}
extern "C" {
void *fn_802C1028(){
 if(!lbl_80534A68) lbl_80534A68=fn_800635C8(lbl_8041CA68,lbl_804D0010,lbl_804D002C,0x7);
 return lbl_80534A68;
}
}
#pragma pop
