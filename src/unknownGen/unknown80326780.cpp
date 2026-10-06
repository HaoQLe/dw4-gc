#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800635C8(void *,void *,void *,int);
extern char lbl_80453438[];
extern char lbl_804E196C[];
extern char lbl_804E1974[];
extern void *lbl_80535D28;
}
extern "C" {
void *fn_80326780(){
 if(!lbl_80535D28) lbl_80535D28=fn_800635C8(lbl_80453438,lbl_804E196C,lbl_804E1974,0x2);
 return lbl_80535D28;
}
}
#pragma pop
