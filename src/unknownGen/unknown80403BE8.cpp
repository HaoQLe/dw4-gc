#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800635C8(void *,void *,void *,int);
extern char lbl_80461E48[];
extern char lbl_804F0060[];
extern char lbl_804F006C[];
extern void *lbl_8055C784;
}
extern "C" {
void *fn_80403BE8(){
 if(!lbl_8055C784) lbl_8055C784=fn_800635C8(lbl_80461E48,lbl_804F0060,lbl_804F006C,0x3);
 return lbl_8055C784;
}
}
#pragma pop
