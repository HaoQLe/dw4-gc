#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800635C8(void *,void *,void *,int);
extern char lbl_80480EC0[];
extern void *lbl_80562CDC;
extern void *lbl_80562CE0;
extern void *lbl_80562CE4;
extern void *lbl_80562CE8;
}
extern "C" {
void *fn_800CE1C8(){
 char *data=lbl_80480EC0;
 if(!lbl_80562CDC) lbl_80562CDC=fn_800635C8(data+0x3EEC,data+0x3ED4,data+0x3EE0,0x3);
 return lbl_80562CDC;
}
void *fn_800CE214(){
 char *data=lbl_80480EC0;
 if(!lbl_80562CE0) lbl_80562CE0=fn_800635C8(data+0x4060,data+0x4030,data+0x4048,0x6);
 return lbl_80562CE0;
}
void *fn_800CE260(){
 char *data=lbl_80480EC0;
 if(!lbl_80562CE4) lbl_80562CE4=fn_800635C8(data+0x4290,data+0x4278,data+0x4284,0x3);
 return lbl_80562CE4;
}
void *fn_800CE2AC(){
 char *data=lbl_80480EC0;
 if(!lbl_80562CE8) lbl_80562CE8=fn_800635C8(data+0x6A4C,data+0x6434,data+0x6740,0xC3);
 return lbl_80562CE8;
}
}
#pragma pop
