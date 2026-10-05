#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80334D34();
extern void *lbl_80535FDC;
}
extern "C" {
void *fn_80334B98(){
 if(!lbl_80535FDC || !(reinterpret_cast<unsigned int *>(lbl_80535FDC)[0x24/4]&4)) fn_80334D34();
 return lbl_80535FDC;
}
}
#pragma pop
