#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800635C8(void *,void *,void *,int);
extern char lbl_8041CD10[];
extern char lbl_804D1CB8[];
extern char lbl_804D1CCC[];
extern void *lbl_80535248;
}
extern "C" {
void *fn_802D620C(){
 if(!lbl_80535248) lbl_80535248=fn_800635C8(lbl_8041CD10,lbl_804D1CB8,lbl_804D1CCC,0x5);
 return lbl_80535248;
}
}
#pragma pop
