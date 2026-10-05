#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8014063C();
extern void *lbl_80563FD4;
}
extern "C" {
void *fn_80140544(){
 if(!lbl_80563FD4 || !(reinterpret_cast<unsigned int *>(lbl_80563FD4)[0x24/4]&4)) fn_8014063C();
 return lbl_80563FD4;
}
}
#pragma pop
