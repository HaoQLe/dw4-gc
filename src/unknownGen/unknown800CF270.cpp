#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800635C8(void *,void *,void *,int);
extern char lbl_80480EC0[];
extern void *lbl_80562D94;
extern void *lbl_80562D98;
}
extern "C" {
void *fn_800CF270(){
 char *data=lbl_80480EC0;
 if(!lbl_80562D94) lbl_80562D94=fn_800635C8(data+0x7648,data+0x7630,data+0x763C,0x3);
 return lbl_80562D94;
}
void *fn_800CF2BC(){
 char *data=lbl_80480EC0;
 if(!lbl_80562D98) lbl_80562D98=fn_800635C8(data+0x76F0,data+0x76D0,data+0x76E0,0x4);
 return lbl_80562D98;
}
}
#pragma pop
