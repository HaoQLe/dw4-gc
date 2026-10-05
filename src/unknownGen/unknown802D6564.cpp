#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_802D6624();
extern void *lbl_80535250;
}
extern "C" {
void *fn_802D6564(){
 if(!lbl_80535250 || !(reinterpret_cast<unsigned int *>(lbl_80535250)[0x24/4]&4)) fn_802D6624();
 return lbl_80535250;
}
}
#pragma pop
