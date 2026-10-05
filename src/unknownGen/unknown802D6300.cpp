#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_802D645C();
extern void *lbl_8053524C;
}
extern "C" {
void *fn_802D6300(){
 if(!lbl_8053524C || !(reinterpret_cast<unsigned int *>(lbl_8053524C)[0x24/4]&4)) fn_802D645C();
 return lbl_8053524C;
}
}
#pragma pop
