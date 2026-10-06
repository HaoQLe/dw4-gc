#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void *fn_800635C8(void *,void *,void *,int);
void *fn_8006546C(void *,void *);
void fn_802D2FD8();
extern char lbl_8041CA68[];
extern char lbl_804D18FC[];
extern char lbl_804D1900[];
extern void *lbl_80535144;
extern void *lbl_80535148;
extern void *lbl_805621F4;
}
extern "C" {
void *fn_802D2D88(){
 if(!lbl_80535144) lbl_80535144=fn_800635C8(lbl_8041CA68,lbl_804D18FC,lbl_804D1900,0x1);
 return lbl_80535144;
}
void *fn_802D2DE8(void *object){
 fn_802D2FD8();
 return fn_8006546C(lbl_80535148,object);
}
void *fn_802D2E28(){
 if(!lbl_80535148) lbl_80535148=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80535148;
}
void *fn_802D2E7C(){
 if(!lbl_80535148 || !(reinterpret_cast<unsigned int *>(lbl_80535148)[0x24/4]&4)) fn_802D2FD8();
 return lbl_80535148;
}
}
#pragma pop
