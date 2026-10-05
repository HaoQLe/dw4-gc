#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8033BFDC();
extern void *lbl_80536258;
}
extern "C" {
void *fn_8033BE38(){
 if(!lbl_80536258 || !(reinterpret_cast<unsigned int *>(lbl_80536258)[0x24/4]&4)) fn_8033BFDC();
 return lbl_80536258;
}
}
#pragma pop
