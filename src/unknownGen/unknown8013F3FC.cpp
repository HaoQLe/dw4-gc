#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8013F504();
extern void *lbl_80563F9C;
}
extern "C" {
void *fn_8013F3FC(){
 if(!lbl_80563F9C || !(reinterpret_cast<unsigned int *>(lbl_80563F9C)[0x24/4]&4)) fn_8013F504();
 return lbl_80563F9C;
}
}
#pragma pop
