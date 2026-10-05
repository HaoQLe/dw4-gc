#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_801B4BAC();
extern void *lbl_80564A4C;
}
extern "C" {
void *fn_801B4A64(){
 if(!lbl_80564A4C || !(reinterpret_cast<unsigned int *>(lbl_80564A4C)[0x24/4]&4)) fn_801B4BAC();
 return lbl_80564A4C;
}
}
#pragma pop
