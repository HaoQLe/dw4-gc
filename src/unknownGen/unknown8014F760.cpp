#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8014F898();
extern void *lbl_805644AC;
}
extern "C" {
void *fn_8014F760(){
 if(!lbl_805644AC || !(reinterpret_cast<unsigned int *>(lbl_805644AC)[0x24/4]&4)) fn_8014F898();
 return lbl_805644AC;
}
}
#pragma pop
