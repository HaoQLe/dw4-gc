#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800635C8(void *,void *,void *,int);
extern char lbl_80480EC0[];
extern void *lbl_80562CA8;
extern void *lbl_80562CAC;
extern void *lbl_80562CB0;
extern void *lbl_80562CB4;
extern void *lbl_80562CB8;
}
extern "C" {
void *fn_800CDDF0(){
 char *data=lbl_80480EC0;
 if(!lbl_80562CA8) lbl_80562CA8=fn_800635C8(data+0x1304,data+0x12C4,data+0x12E4,0x8);
 return lbl_80562CA8;
}
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
void *fn_800CDF20(){
 char *data=lbl_80480EC0;
 if(!lbl_80562CB8) lbl_80562CB8=fn_800635C8(data+0x2AE8,data+0x2AC0,data+0x2AD4,0x5);
 return lbl_80562CB8;
}
}
#pragma pop
