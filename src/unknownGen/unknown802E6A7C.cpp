#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_802E6BEC();
extern void *lbl_8053580C;
}
extern "C" {
void *fn_802E6A7C(){
 if(!lbl_8053580C || !(reinterpret_cast<unsigned int *>(lbl_8053580C)[0x24/4]&4)) fn_802E6BEC();
 return lbl_8053580C;
}
}
#pragma pop
