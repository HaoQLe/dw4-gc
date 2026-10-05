#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_802D8870();
extern void *lbl_80535304;
}
extern "C" {
void *fn_802D8714(){
 if(!lbl_80535304 || !(reinterpret_cast<unsigned int *>(lbl_80535304)[0x24/4]&4)) fn_802D8870();
 return lbl_80535304;
}
}
#pragma pop
