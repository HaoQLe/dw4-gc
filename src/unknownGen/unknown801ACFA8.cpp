#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void fn_801AD1D8();
extern void *lbl_805621F4;
extern void *lbl_80564744;
}
extern "C" {
void *fn_801ACFA8(){
 if(!lbl_80564744) lbl_80564744=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80564744;
}
void *fn_801ACFE4(){
 if(!lbl_80564744 || !(reinterpret_cast<unsigned int *>(lbl_80564744)[0x24/4]&4)) fn_801AD1D8();
 return lbl_80564744;
}
}
#pragma pop
