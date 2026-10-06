#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800635C8(void *,void *,void *,int);
extern char lbl_8041CA68[];
extern char lbl_804D18FC[];
extern char lbl_804D1900[];
extern void *lbl_80535144;
}
extern "C" {
void *fn_802D2D88(){
 if(!lbl_80535144) lbl_80535144=fn_800635C8(lbl_8041CA68,lbl_804D18FC,lbl_804D1900,0x1);
 return lbl_80535144;
}
}
#pragma pop
