#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80218968();
extern void *lbl_80565A98;
}
extern "C" {
void *fn_80218884(){
 if(!lbl_80565A98 || !(reinterpret_cast<unsigned int *>(lbl_80565A98)[0x24/4]&4)) fn_80218968();
 return lbl_80565A98;
}
}
#pragma pop
