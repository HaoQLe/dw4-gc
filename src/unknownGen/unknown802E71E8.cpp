#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800635C8(void *,void *,void *,int);
extern char lbl_8041CA68[];
extern char lbl_804D31B8[];
extern char lbl_804D31D4[];
extern void *lbl_80535828;
}
extern "C" {
void *fn_802E71E8(){
 if(!lbl_80535828) lbl_80535828=fn_800635C8(lbl_8041CA68,lbl_804D31B8,lbl_804D31D4,0x7);
 return lbl_80535828;
}
}
#pragma pop
