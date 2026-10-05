#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_802B3048();
extern void *lbl_8053454C;
}
extern "C" {
void *fn_802B2F88(){
 if(!lbl_8053454C || !(reinterpret_cast<unsigned int *>(lbl_8053454C)[0x24/4]&4)) fn_802B3048();
 return lbl_8053454C;
}
}
#pragma pop
