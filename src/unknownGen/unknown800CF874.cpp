#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800635C8(void *,void *,void *,int);
extern char lbl_80480EC0[];
extern void *lbl_80562DBC;
}
extern "C" {
void *fn_800CF874(){
 char *data=lbl_80480EC0;
 if(!lbl_80562DBC) lbl_80562DBC=fn_800635C8(data+0x7968,data+0x7910,data+0x793C,0xB);
 return lbl_80562DBC;
}
}
#pragma pop
