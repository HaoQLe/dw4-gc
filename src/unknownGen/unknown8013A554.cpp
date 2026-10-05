#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8013A680();
extern void *lbl_80563E3C;
}
extern "C" {
void *fn_8013A554(){
 if(!lbl_80563E3C || !(reinterpret_cast<unsigned int *>(lbl_80563E3C)[0x24/4]&4)) fn_8013A680();
 return lbl_80563E3C;
}
}
#pragma pop
