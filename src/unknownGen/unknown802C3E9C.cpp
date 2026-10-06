#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800635C8(void *,void *,void *,int);
extern char lbl_8041CD10[];
extern char lbl_804D0450[];
extern char lbl_804D0460[];
extern void *lbl_80534B8C;
}
extern "C" {
void *fn_802C3E9C(){
 if(!lbl_80534B8C) lbl_80534B8C=fn_800635C8(lbl_8041CD10,lbl_804D0450,lbl_804D0460,0x4);
 return lbl_80534B8C;
}
}
#pragma pop
