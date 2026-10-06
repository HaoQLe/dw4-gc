#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800635C8(void *,void *,void *,int);
extern char lbl_8041CD10[];
extern char lbl_804D0568[];
extern char lbl_804D0578[];
extern void *lbl_80534BE0;
}
extern "C" {
void *fn_802C4E44(){
 if(!lbl_80534BE0) lbl_80534BE0=fn_800635C8(lbl_8041CD10,lbl_804D0568,lbl_804D0578,0x4);
 return lbl_80534BE0;
}
}
#pragma pop
