#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80132BBC();
extern void *lbl_80563B7C;
}
extern "C" {
void *fn_8013291C(){
 if(!lbl_80563B7C || !(reinterpret_cast<unsigned int *>(lbl_80563B7C)[0x24/4]&4)) fn_80132BBC();
 return lbl_80563B7C;
}
}
#pragma pop
