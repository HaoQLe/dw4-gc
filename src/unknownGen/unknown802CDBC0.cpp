#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800635C8(void *,void *,void *,int);
extern char lbl_8041CA68[];
extern char lbl_804D130C[];
extern char lbl_804D132C[];
extern void *lbl_80534FB4;
}
extern "C" {
void *fn_802CDBC0(){
 if(!lbl_80534FB4) lbl_80534FB4=fn_800635C8(lbl_8041CA68,lbl_804D130C,lbl_804D132C,0x8);
 return lbl_80534FB4;
}
}
#pragma pop
