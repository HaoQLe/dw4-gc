#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_802BA14C();
extern void *lbl_805347B4;
}
extern "C" {
void *fn_802B9FB0(){
 if(!lbl_805347B4 || !(reinterpret_cast<unsigned int *>(lbl_805347B4)[0x24/4]&4)) fn_802BA14C();
 return lbl_805347B4;
}
}
#pragma pop
