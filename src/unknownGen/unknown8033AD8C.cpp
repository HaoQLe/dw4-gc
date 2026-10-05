#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8033AF8C();
extern void *lbl_80536228;
}
extern "C" {
void *fn_8033AD8C(){
 if(!lbl_80536228 || !(reinterpret_cast<unsigned int *>(lbl_80536228)[0x24/4]&4)) fn_8033AF8C();
 return lbl_80536228;
}
}
#pragma pop
