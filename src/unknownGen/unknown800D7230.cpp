#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_800D73D4();
extern void *lbl_80563374;
}
extern "C" {
void *fn_800D7230(){
 if(!lbl_80563374 || !(reinterpret_cast<unsigned int *>(lbl_80563374)[0x24/4]&4)) fn_800D73D4();
 return lbl_80563374;
}
}
#pragma pop
