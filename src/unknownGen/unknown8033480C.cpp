#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800635C8(void *,void *,void *,int);
extern char lbl_80453438[];
extern char lbl_804E2124[];
extern char lbl_804E2130[];
extern void *lbl_80535FD0;
}
extern "C" {
void *fn_8033480C(){
 if(!lbl_80535FD0) lbl_80535FD0=fn_800635C8(lbl_80453438,lbl_804E2124,lbl_804E2130,0x3);
 return lbl_80535FD0;
}
}
#pragma pop
