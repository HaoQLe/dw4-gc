#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800635C8(void *,void *,void *,int);
extern char lbl_8041CD10[];
extern char lbl_804CF458[];
extern char lbl_804CF45C[];
extern void *lbl_80534724;
}
extern "C" {
void *fn_802B8018(){
 if(!lbl_80534724) lbl_80534724=fn_800635C8(lbl_8041CD10,lbl_804CF458,lbl_804CF45C,0x1);
 return lbl_80534724;
}
}
#pragma pop
