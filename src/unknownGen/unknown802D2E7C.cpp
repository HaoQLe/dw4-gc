#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_802D2FD8();
extern void *lbl_80535148;
}
extern "C" {
void *fn_802D2E7C(){
 if(!lbl_80535148 || !(reinterpret_cast<unsigned int *>(lbl_80535148)[0x24/4]&4)) fn_802D2FD8();
 return lbl_80535148;
}
}
#pragma pop
