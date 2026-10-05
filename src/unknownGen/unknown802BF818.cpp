#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_802BF8D8();
extern void *lbl_805349B8;
}
extern "C" {
void *fn_802BF818(){
 if(!lbl_805349B8 || !(reinterpret_cast<unsigned int *>(lbl_805349B8)[0x24/4]&4)) fn_802BF8D8();
 return lbl_805349B8;
}
}
#pragma pop
