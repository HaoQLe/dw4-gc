#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_802D1D34();
extern void *lbl_80535108;
}
extern "C" {
void *fn_802D1C74(){
 if(!lbl_80535108 || !(reinterpret_cast<unsigned int *>(lbl_80535108)[0x24/4]&4)) fn_802D1D34();
 return lbl_80535108;
}
}
#pragma pop
