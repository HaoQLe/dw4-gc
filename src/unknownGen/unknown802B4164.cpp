#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_802B436C();
extern void *lbl_8053457C;
}
extern "C" {
void *fn_802B4164(){
 if(!lbl_8053457C || !(reinterpret_cast<unsigned int *>(lbl_8053457C)[0x24/4]&4)) fn_802B436C();
 return lbl_8053457C;
}
}
#pragma pop
