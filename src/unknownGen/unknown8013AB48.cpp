#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8013AD3C();
extern void *lbl_80563E6C;
}
extern "C" {
void *fn_8013AB48(){
 if(!lbl_80563E6C || !(reinterpret_cast<unsigned int *>(lbl_80563E6C)[0x24/4]&4)) fn_8013AD3C();
 return lbl_80563E6C;
}
}
#pragma pop
