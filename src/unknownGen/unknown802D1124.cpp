#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800635C8(void *,void *,void *,int);
extern char lbl_8041CD10[];
extern char lbl_804D174C[];
extern char lbl_804D1764[];
extern void *lbl_805350CC;
}
extern "C" {
void *fn_802D1124(){
 if(!lbl_805350CC) lbl_805350CC=fn_800635C8(lbl_8041CD10,lbl_804D174C,lbl_804D1764,0x6);
 return lbl_805350CC;
}
}
#pragma pop
