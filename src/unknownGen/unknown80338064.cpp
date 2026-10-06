#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800635C8(void *,void *,void *,int);
extern char lbl_80453438[];
extern char lbl_804E2670[];
extern char lbl_804E269C[];
extern void *lbl_8053614C;
}
extern "C" {
void *fn_80338064(){
 if(!lbl_8053614C) lbl_8053614C=fn_800635C8(lbl_80453438,lbl_804E2670,lbl_804E269C,0xB);
 return lbl_8053614C;
}
}
#pragma pop
