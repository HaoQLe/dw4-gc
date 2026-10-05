#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_801C765C();
extern void *lbl_805652D8;
}
extern "C" {
void *fn_801C758C(){
 if(!lbl_805652D8 || !(reinterpret_cast<unsigned int *>(lbl_805652D8)[0x24/4]&4)) fn_801C765C();
 return lbl_805652D8;
}
}
#pragma pop
