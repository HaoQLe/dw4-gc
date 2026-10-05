#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_802BA3C0();
extern void *lbl_805347B8;
}
extern "C" {
void *fn_802BA200(){
 if(!lbl_805347B8 || !(reinterpret_cast<unsigned int *>(lbl_805347B8)[0x24/4]&4)) fn_802BA3C0();
 return lbl_805347B8;
}
}
#pragma pop
