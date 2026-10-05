#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_802D1F20();
extern void *lbl_8053510C;
}
extern "C" {
void *fn_802D1DF0(){
 if(!lbl_8053510C || !(reinterpret_cast<unsigned int *>(lbl_8053510C)[0x24/4]&4)) fn_802D1F20();
 return lbl_8053510C;
}
}
#pragma pop
