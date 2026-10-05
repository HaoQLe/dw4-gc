#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_802E2E24();
extern void *lbl_805356A0;
}
extern "C" {
void *fn_802E2CC8(){
 if(!lbl_805356A0 || !(reinterpret_cast<unsigned int *>(lbl_805356A0)[0x24/4]&4)) fn_802E2E24();
 return lbl_805356A0;
}
}
#pragma pop
