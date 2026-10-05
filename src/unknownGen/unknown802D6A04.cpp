#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_802D6B20();
extern void *lbl_80535258;
}
extern "C" {
void *fn_802D6A04(){
 if(!lbl_80535258 || !(reinterpret_cast<unsigned int *>(lbl_80535258)[0x24/4]&4)) fn_802D6B20();
 return lbl_80535258;
}
}
#pragma pop
