#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_802E02AC();
extern void *lbl_805355B8;
}
extern "C" {
void *fn_802E0218(){
 if(!lbl_805355B8 || !(reinterpret_cast<unsigned int *>(lbl_805355B8)[0x24/4]&4)) fn_802E02AC();
 return lbl_805355B8;
}
}
#pragma pop
