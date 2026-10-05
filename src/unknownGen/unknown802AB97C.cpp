#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_802ABA3C();
extern void *lbl_805343D4;
}
extern "C" {
void *fn_802AB97C(){
 if(!lbl_805343D4 || !(reinterpret_cast<unsigned int *>(lbl_805343D4)[0x24/4]&4)) fn_802ABA3C();
 return lbl_805343D4;
}
}
#pragma pop
