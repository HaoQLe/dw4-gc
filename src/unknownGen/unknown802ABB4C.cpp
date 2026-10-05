#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_802ABC34();
extern void *lbl_805343D8;
}
extern "C" {
void *fn_802ABB4C(){
 if(!lbl_805343D8 || !(reinterpret_cast<unsigned int *>(lbl_805343D8)[0x24/4]&4)) fn_802ABC34();
 return lbl_805343D8;
}
}
#pragma pop
