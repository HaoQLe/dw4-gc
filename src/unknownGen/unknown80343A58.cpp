#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80343BB4();
extern void *lbl_80536778;
}
extern "C" {
void *fn_80343A58(){
 if(!lbl_80536778 || !(reinterpret_cast<unsigned int *>(lbl_80536778)[0x24/4]&4)) fn_80343BB4();
 return lbl_80536778;
}
}
#pragma pop
