#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8013EB24();
extern void *lbl_80563F7C;
}
extern "C" {
void *fn_8013EA1C(){
 if(!lbl_80563F7C || !(reinterpret_cast<unsigned int *>(lbl_80563F7C)[0x24/4]&4)) fn_8013EB24();
 return lbl_80563F7C;
}
}
#pragma pop
