#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_800AE618();
extern void *lbl_805624FC;
}
extern "C" {
void *fn_800AE470(){
 if(!lbl_805624FC || !(reinterpret_cast<unsigned int *>(lbl_805624FC)[0x24/4]&4)) fn_800AE618();
 return lbl_805624FC;
}
}
#pragma pop
