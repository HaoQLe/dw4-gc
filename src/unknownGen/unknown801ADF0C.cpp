#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_801ADFDC();
extern void *lbl_805647B8;
}
extern "C" {
void *fn_801ADF0C(){
 if(!lbl_805647B8 || !(reinterpret_cast<unsigned int *>(lbl_805647B8)[0x24/4]&4)) fn_801ADFDC();
 return lbl_805647B8;
}
}
#pragma pop
