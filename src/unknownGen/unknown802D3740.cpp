#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_802D3828();
extern void *lbl_8053515C;
}
extern "C" {
void *fn_802D3740(){
 if(!lbl_8053515C || !(reinterpret_cast<unsigned int *>(lbl_8053515C)[0x24/4]&4)) fn_802D3828();
 return lbl_8053515C;
}
}
#pragma pop
