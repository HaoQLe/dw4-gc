#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_802E6314();
extern void *lbl_805357E4;
}
extern "C" {
void *fn_802E622C(){
 if(!lbl_805357E4 || !(reinterpret_cast<unsigned int *>(lbl_805357E4)[0x24/4]&4)) fn_802E6314();
 return lbl_805357E4;
}
}
#pragma pop
