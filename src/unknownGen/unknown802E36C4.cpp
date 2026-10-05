#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_802E3784();
extern void *lbl_805356F0;
}
extern "C" {
void *fn_802E36C4(){
 if(!lbl_805356F0 || !(reinterpret_cast<unsigned int *>(lbl_805356F0)[0x24/4]&4)) fn_802E3784();
 return lbl_805356F0;
}
}
#pragma pop
