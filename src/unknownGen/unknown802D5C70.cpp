#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_802D5DA0();
extern void *lbl_8053521C;
}
extern "C" {
void *fn_802D5C70(){
 if(!lbl_8053521C || !(reinterpret_cast<unsigned int *>(lbl_8053521C)[0x24/4]&4)) fn_802D5DA0();
 return lbl_8053521C;
}
}
#pragma pop
