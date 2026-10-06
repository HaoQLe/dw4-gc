#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800635C8(void *,void *,void *,int);
extern char lbl_80453438[];
extern char lbl_804E23A4[];
extern char lbl_804E23B4[];
extern void *lbl_8053608C;
}
extern "C" {
void *fn_8033627C(){
 if(!lbl_8053608C) lbl_8053608C=fn_800635C8(lbl_80453438,lbl_804E23A4,lbl_804E23B4,0x4);
 return lbl_8053608C;
}
}
#pragma pop
