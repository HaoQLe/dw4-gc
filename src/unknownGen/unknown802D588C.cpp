#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_802D594C();
extern void *lbl_8053520C;
}
extern "C" {
void *fn_802D588C(){
 if(!lbl_8053520C || !(reinterpret_cast<unsigned int *>(lbl_8053520C)[0x24/4]&4)) fn_802D594C();
 return lbl_8053520C;
}
}
#pragma pop
