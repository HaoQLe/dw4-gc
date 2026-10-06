#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void fn_802BF8D8();
extern void *lbl_805349B8;
extern void *lbl_805621F4;
}
extern "C" {
void *fn_802BF7C4(){
 if(!lbl_805349B8) lbl_805349B8=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_805349B8;
}
void *fn_802BF818(){
 if(!lbl_805349B8 || !(reinterpret_cast<unsigned int *>(lbl_805349B8)[0x24/4]&4)) fn_802BF8D8();
 return lbl_805349B8;
}
}
#pragma pop
