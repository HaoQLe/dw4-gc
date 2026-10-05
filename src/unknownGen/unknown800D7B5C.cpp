#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_800D7C90();
extern void *lbl_805633E4;
}
extern "C" {
void *fn_800D7B5C(){
 if(!lbl_805633E4 || !(reinterpret_cast<unsigned int *>(lbl_805633E4)[0x24/4]&4)) fn_800D7C90();
 return lbl_805633E4;
}
}
#pragma pop
