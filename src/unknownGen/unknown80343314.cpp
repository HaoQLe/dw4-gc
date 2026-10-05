#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80343360();
extern void *lbl_80536754;
}
extern "C" {
void *fn_80343314(){
 if(!lbl_80536754 || !(reinterpret_cast<unsigned int *>(lbl_80536754)[0x24/4]&4)) fn_80343360();
 return lbl_80536754;
}
}
#pragma pop
