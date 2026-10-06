#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800635C8(void *,void *,void *,int);
extern char lbl_8041CD10[];
extern char lbl_804CF540[];
extern char lbl_804CF59C[];
extern void *lbl_80534770;
}
extern "C" {
void *fn_802B8E10(){
 if(!lbl_80534770) lbl_80534770=fn_800635C8(lbl_8041CD10,lbl_804CF540,lbl_804CF59C,0x17);
 return lbl_80534770;
}
}
#pragma pop
