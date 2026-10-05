#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_802E64B0();
extern void *lbl_805357E8;
}
extern "C" {
void *fn_802E63C8(){
 if(!lbl_805357E8 || !(reinterpret_cast<unsigned int *>(lbl_805357E8)[0x24/4]&4)) fn_802E64B0();
 return lbl_805357E8;
}
}
#pragma pop
