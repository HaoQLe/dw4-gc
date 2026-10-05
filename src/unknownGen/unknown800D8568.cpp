#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_800D863C();
extern void *lbl_80563460;
}
extern "C" {
void *fn_800D8568(){
 if(!lbl_80563460 || !(reinterpret_cast<unsigned int *>(lbl_80563460)[0x24/4]&4)) fn_800D863C();
 return lbl_80563460;
}
}
#pragma pop
