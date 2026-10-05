#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_802D22E8();
extern void *lbl_80535118;
}
extern "C" {
void *fn_802D2254(){
 if(!lbl_80535118 || !(reinterpret_cast<unsigned int *>(lbl_80535118)[0x24/4]&4)) fn_802D22E8();
 return lbl_80535118;
}
}
#pragma pop
