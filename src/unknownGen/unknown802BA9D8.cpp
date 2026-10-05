#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_802BAB34();
extern void *lbl_805347EC;
}
extern "C" {
void *fn_802BA9D8(){
 if(!lbl_805347EC || !(reinterpret_cast<unsigned int *>(lbl_805347EC)[0x24/4]&4)) fn_802BAB34();
 return lbl_805347EC;
}
}
#pragma pop
