#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800635C8(void *,void *,void *,int);
extern char lbl_8041CD10[];
extern char lbl_804D0108[];
extern char lbl_804D0128[];
extern void *lbl_80534AA4;
}
extern "C" {
void *fn_802C1E30(){
 if(!lbl_80534AA4) lbl_80534AA4=fn_800635C8(lbl_8041CD10,lbl_804D0108,lbl_804D0128,0x8);
 return lbl_80534AA4;
}
}
#pragma pop
