#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_802E0AE0();
extern void *lbl_805355C4;
}
extern "C" {
void *fn_802E07E4(){
 if(!lbl_805355C4 || !(reinterpret_cast<unsigned int *>(lbl_805355C4)[0x24/4]&4)) fn_802E0AE0();
 return lbl_805355C4;
}
}
#pragma pop
