#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80341298();
extern void *lbl_805366BC;
}
extern "C" {
void *fn_8034110C(){
 if(!lbl_805366BC || !(reinterpret_cast<unsigned int *>(lbl_805366BC)[0x24/4]&4)) fn_80341298();
 return lbl_805366BC;
}
}
#pragma pop
