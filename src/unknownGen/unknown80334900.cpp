#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80334A5C();
extern void *lbl_80535FD4;
}
extern "C" {
void *fn_80334900(){
 if(!lbl_80535FD4 || !(reinterpret_cast<unsigned int *>(lbl_80535FD4)[0x24/4]&4)) fn_80334A5C();
 return lbl_80535FD4;
}
}
#pragma pop
