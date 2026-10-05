#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_802E1C10();
extern void *lbl_8053560C;
}
extern "C" {
void *fn_802E1B38(){
 if(!lbl_8053560C || !(reinterpret_cast<unsigned int *>(lbl_8053560C)[0x24/4]&4)) fn_802E1C10();
 return lbl_8053560C;
}
}
#pragma pop
