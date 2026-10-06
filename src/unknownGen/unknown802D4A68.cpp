#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800635C8(void *,void *,void *,int);
extern char lbl_8041CD10[];
extern char lbl_804D1ABC[];
extern char lbl_804D1AD0[];
extern void *lbl_805351C0;
}
extern "C" {
void *fn_802D4A68(){
 if(!lbl_805351C0) lbl_805351C0=fn_800635C8(lbl_8041CD10,lbl_804D1ABC,lbl_804D1AD0,0x5);
 return lbl_805351C0;
}
}
#pragma pop
