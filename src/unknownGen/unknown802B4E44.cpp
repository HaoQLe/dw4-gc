#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800635C8(void *,void *,void *,int);
extern char lbl_8041CD10[];
extern char lbl_804CF0BC[];
extern char lbl_804CF0C0[];
extern void *lbl_8053461C;
}
extern "C" {
void *fn_802B4E44(){
 if(!lbl_8053461C) lbl_8053461C=fn_800635C8(lbl_8041CD10,lbl_804CF0BC,lbl_804CF0C0,0x1);
 return lbl_8053461C;
}
}
#pragma pop
