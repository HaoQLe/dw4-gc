#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_802D3174();
extern void *lbl_8053514C;
}
extern "C" {
void *fn_802D308C(){
 if(!lbl_8053514C || !(reinterpret_cast<unsigned int *>(lbl_8053514C)[0x24/4]&4)) fn_802D3174();
 return lbl_8053514C;
}
}
#pragma pop
