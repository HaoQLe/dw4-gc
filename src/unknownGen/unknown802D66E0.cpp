#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_802D68BC();
extern void *lbl_80535254;
}
extern "C" {
void *fn_802D66E0(){
 if(!lbl_80535254 || !(reinterpret_cast<unsigned int *>(lbl_80535254)[0x24/4]&4)) fn_802D68BC();
 return lbl_80535254;
}
}
#pragma pop
