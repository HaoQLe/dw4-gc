#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800635C8(void *,void *,void *,int);
extern char lbl_80480EC0[];
extern void *lbl_80562CAC;
extern void *lbl_80562CB0;
extern void *lbl_80562CB4;
}
extern "C" {
void *fn_800CDE3C(){
 char *data=lbl_80480EC0;
 if(!lbl_80562CAC) lbl_80562CAC=fn_800635C8(data+0x19C0,data+0x1968,data+0x1994,0xB);
 return lbl_80562CAC;
}
void *fn_800CDE88(){
 char *data=lbl_80480EC0;
 if(!lbl_80562CB0) lbl_80562CB0=fn_800635C8(data+0x1BC0,data+0x1B90,data+0x1BA8,0x6);
 return lbl_80562CB0;
}
void *fn_800CDED4(){
 char *data=lbl_80480EC0;
 if(!lbl_80562CB4) lbl_80562CB4=fn_800635C8(data+0x218C,data+0x20B4,data+0x2120,0x1B);
 return lbl_80562CB4;
}
}
#pragma pop
