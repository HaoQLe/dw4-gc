#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80286674();
extern void *lbl_80515D1C;
}
extern "C" {
void *fn_802865D4(){
 if(!lbl_80515D1C || !(reinterpret_cast<unsigned int *>(lbl_80515D1C)[0x24/4]&4)) fn_80286674();
 return lbl_80515D1C;
}
}
#pragma pop
