#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_802B6B20();
extern void *lbl_80534680;
}
extern "C" {
void *fn_802B697C(){
 if(!lbl_80534680 || !(reinterpret_cast<unsigned int *>(lbl_80534680)[0x24/4]&4)) fn_802B6B20();
 return lbl_80534680;
}
}
#pragma pop
