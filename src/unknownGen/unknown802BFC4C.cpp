#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_802BFD30();
extern void *lbl_805349C4;
}
extern "C" {
void *fn_802BFC4C(){
 if(!lbl_805349C4 || !(reinterpret_cast<unsigned int *>(lbl_805349C4)[0x24/4]&4)) fn_802BFD30();
 return lbl_805349C4;
}
}
#pragma pop
