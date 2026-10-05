#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_802BD6B0();
extern void *lbl_8053490C;
}
extern "C" {
void *fn_802BD4D4(){
 if(!lbl_8053490C || !(reinterpret_cast<unsigned int *>(lbl_8053490C)[0x24/4]&4)) fn_802BD6B0();
 return lbl_8053490C;
}
}
#pragma pop
