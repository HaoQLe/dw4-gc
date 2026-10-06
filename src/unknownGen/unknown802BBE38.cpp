#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800635C8(void *,void *,void *,int);
extern char lbl_8041CD10[];
extern char lbl_804CF848[];
extern char lbl_804CF890[];
extern void *lbl_8053482C;
}
extern "C" {
void *fn_802BBE38(){
 if(!lbl_8053482C) lbl_8053482C=fn_800635C8(lbl_8041CD10,lbl_804CF848,lbl_804CF890,0x12);
 return lbl_8053482C;
}
}
#pragma pop
