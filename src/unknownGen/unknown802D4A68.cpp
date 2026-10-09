#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void *fn_800635C8(void *,void *,void *,int);
void *fn_8006546C(void *,void *);
void fn_802D4E4C();
extern char lbl_8041CD10[];
extern char lbl_804D1ABC[];
extern char lbl_804D1AD0[];
extern void *lbl_805351C0;
extern void *lbl_805351C4;
extern void *lbl_805621F4;
}
extern "C" {
void *fn_802D4A68(){
 if(!lbl_805351C0) lbl_805351C0=fn_800635C8(lbl_8041CD10,lbl_804D1ABC,lbl_804D1AD0,0x5);
 return lbl_805351C0;
}
void *fn_802D4AC8(void *object){
 fn_802D4E4C();
 return fn_8006546C(lbl_805351C4,object);
}
void *fn_802D4B08(){
 if(!lbl_805351C4) lbl_805351C4=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_805351C4;
}
void *beHitLandModel_getMeta(){
 if(!lbl_805351C4 || !(reinterpret_cast<unsigned int *>(lbl_805351C4)[0x24/4]&4)) fn_802D4E4C();
 return lbl_805351C4;
}
}
#pragma pop
