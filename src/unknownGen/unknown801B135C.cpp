#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void fn_801B150C();
extern void *lbl_805621F4;
extern void *lbl_805648F8;
}
extern "C" {
void *fn_801B135C(){
 if(!lbl_805648F8) lbl_805648F8=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_805648F8;
}
void *fn_801B1398(){
 if(!lbl_805648F8 || !(reinterpret_cast<unsigned int *>(lbl_805648F8)[0x24/4]&4)) fn_801B150C();
 return lbl_805648F8;
}
}
#pragma pop
