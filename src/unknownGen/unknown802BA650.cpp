#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_802BA76C();
extern void *lbl_805347D0;
}
extern "C" {
void *fn_802BA650(){
 if(!lbl_805347D0 || !(reinterpret_cast<unsigned int *>(lbl_805347D0)[0x24/4]&4)) fn_802BA76C();
 return lbl_805347D0;
}
}
#pragma pop
