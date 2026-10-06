#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void fn_802D594C();
extern void *lbl_8053520C;
extern void *lbl_805621F4;
}
extern "C" {
void *fn_802D5838(){
 if(!lbl_8053520C) lbl_8053520C=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_8053520C;
}
void *fn_802D588C(){
 if(!lbl_8053520C || !(reinterpret_cast<unsigned int *>(lbl_8053520C)[0x24/4]&4)) fn_802D594C();
 return lbl_8053520C;
}
}
#pragma pop
