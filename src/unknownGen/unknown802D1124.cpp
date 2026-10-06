#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void *fn_800635C8(void *,void *,void *,int);
void *fn_8006546C(void *,void *);
void fn_802D13FC();
extern char lbl_8041CD10[];
extern char lbl_804D174C[];
extern char lbl_804D1764[];
extern void *lbl_805350CC;
extern void *lbl_805350D0;
extern void *lbl_805621F4;
}
extern "C" {
void *fn_802D1124(){
 if(!lbl_805350CC) lbl_805350CC=fn_800635C8(lbl_8041CD10,lbl_804D174C,lbl_804D1764,0x6);
 return lbl_805350CC;
}
void *fn_802D1184(void *object){
 fn_802D13FC();
 return fn_8006546C(lbl_805350D0,object);
}
void *fn_802D11C4(){
 if(!lbl_805350D0) lbl_805350D0=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_805350D0;
}
void *fn_802D1218(){
 if(!lbl_805350D0 || !(reinterpret_cast<unsigned int *>(lbl_805350D0)[0x24/4]&4)) fn_802D13FC();
 return lbl_805350D0;
}
}
#pragma pop
