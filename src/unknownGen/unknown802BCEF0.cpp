#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_802BCF84();
extern void *lbl_805348C4;
}
extern "C" {
void *fn_802BCEF0(){
 if(!lbl_805348C4 || !(reinterpret_cast<unsigned int *>(lbl_805348C4)[0x24/4]&4)) fn_802BCF84();
 return lbl_805348C4;
}
}
#pragma pop
