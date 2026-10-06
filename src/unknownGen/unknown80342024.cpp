#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800635C8(void *,void *,void *,int);
extern char lbl_80453438[];
extern char lbl_804E3CA8[];
extern char lbl_804E3CB8[];
extern void *lbl_80536714;
}
extern "C" {
void *fn_80342024(){
 if(!lbl_80536714) lbl_80536714=fn_800635C8(lbl_80453438,lbl_804E3CA8,lbl_804E3CB8,0x4);
 return lbl_80536714;
}
}
#pragma pop
