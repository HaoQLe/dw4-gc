#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_802D6158();
extern void *lbl_80535244;
}
extern "C" {
void *fn_802D5FBC(){
 if(!lbl_80535244 || !(reinterpret_cast<unsigned int *>(lbl_80535244)[0x24/4]&4)) fn_802D6158();
 return lbl_80535244;
}
}
#pragma pop
