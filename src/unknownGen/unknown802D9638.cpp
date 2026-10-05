#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_802D9814();
extern void *lbl_80535348;
}
extern "C" {
void *fn_802D9638(){
 if(!lbl_80535348 || !(reinterpret_cast<unsigned int *>(lbl_80535348)[0x24/4]&4)) fn_802D9814();
 return lbl_80535348;
}
}
#pragma pop
