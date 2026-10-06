#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800635C8(void *,void *,void *,int);
extern char lbl_80463100[];
extern void *lbl_80561ECC;
extern void *lbl_80561ED0;
extern void *lbl_80561ED4;
}
extern "C" {
void *fn_80039404(){
 char *data=lbl_80463100;
 if(!lbl_80561ECC) lbl_80561ECC=fn_800635C8(data+0x4BE8,data+0x4B98,data+0x4BC0,0xA);
 return lbl_80561ECC;
}
void *fn_80039450(){
 char *data=lbl_80463100;
 if(!lbl_80561ED0) lbl_80561ED0=fn_800635C8(data+0x4A88,data+0x4C00,data+0x4C10,0x4);
 return lbl_80561ED0;
}
void *fn_8003949C(){
 char *data=lbl_80463100;
 if(!lbl_80561ED4) lbl_80561ED4=fn_800635C8(data+0x4C80,data+0x4C60,data+0x4C70,0x4);
 return lbl_80561ED4;
}
}
#pragma pop
