#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800635C8(void *,void *,void *,int);
extern char lbl_8041CD10[];
extern char lbl_8041FBD8[];
extern char lbl_804202E4[];
extern char lbl_804D2048[];
extern char lbl_804D2054[];
extern char lbl_804D2060[];
extern char lbl_804D2070[];
extern char lbl_804D2080[];
extern char lbl_804D20A4[];
extern void *lbl_8053534C;
extern void *lbl_80535350;
extern void *lbl_80535354;
}
extern "C" {
void *fn_802D98D8(){
 if(!lbl_8053534C) lbl_8053534C=fn_800635C8(lbl_804202E4,lbl_804D2048,lbl_804D2054,0x3);
 return lbl_8053534C;
}
void *fn_802D9938(){
 if(!lbl_80535350) lbl_80535350=fn_800635C8(lbl_8041FBD8,lbl_804D2060,lbl_804D2070,0x4);
 return lbl_80535350;
}
void *fn_802D9998(){
 if(!lbl_80535354) lbl_80535354=fn_800635C8(lbl_8041CD10,lbl_804D2080,lbl_804D20A4,0x9);
 return lbl_80535354;
}
}
#pragma pop
