#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_802E66D4();
extern void *lbl_805357F0;
}
extern "C" {
void *fn_802E65EC(){
 if(!lbl_805357F0 || !(reinterpret_cast<unsigned int *>(lbl_805357F0)[0x24/4]&4)) fn_802E66D4();
 return lbl_805357F0;
}
}
#pragma pop
