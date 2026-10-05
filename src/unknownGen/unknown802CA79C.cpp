#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_802CA85C();
extern void *lbl_80534E9C;
}
extern "C" {
void *fn_802CA79C(){
 if(!lbl_80534E9C || !(reinterpret_cast<unsigned int *>(lbl_80534E9C)[0x24/4]&4)) fn_802CA85C();
 return lbl_80534E9C;
}
}
#pragma pop
