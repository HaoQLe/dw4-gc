#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_803408F4();
extern void *lbl_80536630;
}
extern "C" {
void *fn_80340834(){
 if(!lbl_80536630 || !(reinterpret_cast<unsigned int *>(lbl_80536630)[0x24/4]&4)) fn_803408F4();
 return lbl_80536630;
}
}
#pragma pop
