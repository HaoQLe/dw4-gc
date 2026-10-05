#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_802AD500();
extern void *lbl_80534474;
}
extern "C" {
void *fn_802AD2DC(){
 if(!lbl_80534474 || !(reinterpret_cast<unsigned int *>(lbl_80534474)[0x24/4]&4)) fn_802AD500();
 return lbl_80534474;
}
}
#pragma pop
