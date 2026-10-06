#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800635C8(void *,void *,void *,int);
extern char lbl_80453220[];
extern char lbl_804E16B0[];
extern char lbl_804E16DC[];
extern void *lbl_80535C7C;
}
extern "C" {
void *fn_80325B44(){
 if(!lbl_80535C7C) lbl_80535C7C=fn_800635C8(lbl_80453220,lbl_804E16B0,lbl_804E16DC,0xB);
 return lbl_80535C7C;
}
}
#pragma pop
