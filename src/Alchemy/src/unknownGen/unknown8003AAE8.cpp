#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8003AC74();
extern void *lbl_80562048;
}
extern "C" {
void *fn_8003AAE8(){
 if(!lbl_80562048 || !(reinterpret_cast<unsigned int *>(lbl_80562048)[0x24/4]&4)) fn_8003AC74();
 return lbl_80562048;
}
}
#pragma pop
