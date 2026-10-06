#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800635C8(void *,void *,void *,int);
extern char lbl_80477D08[];
extern void *lbl_80562A08;
extern void *lbl_80562A0C;
}
extern "C" {
void *fn_800BA5F8(){
 char *data=lbl_80477D08;
 if(!lbl_80562A08) lbl_80562A08=fn_800635C8(data+0x211C,data+0x2104,data+0x2110,0x3);
 return lbl_80562A08;
}
void *fn_800BA644(){
 char *data=lbl_80477D08;
 if(!lbl_80562A0C) lbl_80562A0C=fn_800635C8(data+0x21A8,data+0x2190,data+0x219C,0x3);
 return lbl_80562A0C;
}
}
#pragma pop
