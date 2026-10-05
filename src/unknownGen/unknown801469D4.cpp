#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80146C84();
extern void *lbl_805641A8;
}
extern "C" {
void *fn_801469D4(){
 if(!lbl_805641A8 || !(reinterpret_cast<unsigned int *>(lbl_805641A8)[0x24/4]&4)) fn_80146C84();
 return lbl_805641A8;
}
}
#pragma pop
