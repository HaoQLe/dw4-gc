#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_802CA280();
extern void *lbl_80534E6C;
}
extern "C" {
void *fn_802CA1C0(){
 if(!lbl_80534E6C || !(reinterpret_cast<unsigned int *>(lbl_80534E6C)[0x24/4]&4)) fn_802CA280();
 return lbl_80534E6C;
}
}
#pragma pop
