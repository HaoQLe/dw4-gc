#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void fn_800AED4C();
extern void *lbl_805621F4;
extern void *lbl_80562528;
}
extern "C" {
void *fn_800AEABC(){
 if(!lbl_80562528) lbl_80562528=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80562528;
}
void *fn_800AEAF8(){
 if(!lbl_80562528 || !(reinterpret_cast<unsigned int *>(lbl_80562528)[0x24/4]&4)) fn_800AED4C();
 return lbl_80562528;
}
}
#pragma pop
