#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800635C8(void *,void *,void *,int);
extern char lbl_80462848[];
extern char lbl_804F0A98[];
extern char lbl_804F0AA4[];
extern void *lbl_8055C9D8;
}
extern "C" {
void *fn_80406FA0(){
 if(!lbl_8055C9D8) lbl_8055C9D8=fn_800635C8(lbl_80462848,lbl_804F0A98,lbl_804F0AA4,0x3);
 return lbl_8055C9D8;
}
}
#pragma pop
