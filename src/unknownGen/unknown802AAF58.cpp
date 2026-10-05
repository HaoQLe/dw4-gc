#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_802AB088();
extern void *lbl_80534368;
}
extern "C" {
void *fn_802AAF58(){
 if(!lbl_80534368 || !(reinterpret_cast<unsigned int *>(lbl_80534368)[0x24/4]&4)) fn_802AB088();
 return lbl_80534368;
}
}
#pragma pop
