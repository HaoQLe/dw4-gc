#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void fn_802C0370();
extern void *lbl_805349F8;
extern void *lbl_805621F4;
}
extern "C" {
void *fn_802C0288(){
 if(!lbl_805349F8) lbl_805349F8=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_805349F8;
}
void *fn_802C02DC(){
 if(!lbl_805349F8 || !(reinterpret_cast<unsigned int *>(lbl_805349F8)[0x24/4]&4)) fn_802C0370();
 return lbl_805349F8;
}
}
#pragma pop
