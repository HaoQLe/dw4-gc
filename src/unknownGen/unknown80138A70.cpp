#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80138C2C();
extern void *lbl_80563DB8;
}
extern "C" {
void *fn_80138A70(){
 if(!lbl_80563DB8 || !(reinterpret_cast<unsigned int *>(lbl_80563DB8)[0x24/4]&4)) fn_80138C2C();
 return lbl_80563DB8;
}
}
#pragma pop
