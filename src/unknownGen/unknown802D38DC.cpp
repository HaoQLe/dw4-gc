#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800635C8(void *,void *,void *,int);
extern char lbl_8041CD10[];
extern char lbl_8041FBD8[];
extern char lbl_804D1924[];
extern char lbl_804D1938[];
extern char lbl_804D194C[];
extern char lbl_804D1964[];
extern void *lbl_80535160;
extern void *lbl_80535164;
}
extern "C" {
void *fn_802D38DC(){
 if(!lbl_80535160) lbl_80535160=fn_800635C8(lbl_8041FBD8,lbl_804D1924,lbl_804D1938,0x5);
 return lbl_80535160;
}
void *fn_802D393C(){
 if(!lbl_80535164) lbl_80535164=fn_800635C8(lbl_8041CD10,lbl_804D194C,lbl_804D1964,0x6);
 return lbl_80535164;
}
}
#pragma pop
