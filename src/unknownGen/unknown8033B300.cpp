#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8033B470();
extern void *lbl_80536230;
}
extern "C" {
void *fn_8033B300(){
 if(!lbl_80536230 || !(reinterpret_cast<unsigned int *>(lbl_80536230)[0x24/4]&4)) fn_8033B470();
 return lbl_80536230;
}
}
#pragma pop
