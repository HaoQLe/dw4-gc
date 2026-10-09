#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_802D7178();
extern void *lbl_80535288;
}
extern "C" {
void *beGeneraterInfo_getMeta(){
 if(!lbl_80535288 || !(reinterpret_cast<unsigned int *>(lbl_80535288)[0x24/4]&4)) fn_802D7178();
 return lbl_80535288;
}
}
#pragma pop
