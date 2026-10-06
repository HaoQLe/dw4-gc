#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800635C8(void *,void *,void *,int);
extern char lbl_8049BC80[];
extern void *lbl_80564478;
}
extern "C" {
void *fn_8014EB10(){
 char *data=lbl_8049BC80;
 if(!lbl_80564478) lbl_80564478=fn_800635C8(data+0x3FF8,data+0x3FE0,data+0x3FEC,0x3);
 return lbl_80564478;
}
}
#pragma pop
