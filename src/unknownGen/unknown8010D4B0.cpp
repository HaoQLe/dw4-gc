#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8010D5E4();
extern void *lbl_80563598;
}
extern "C" {
void *fn_8010D4B0(){
 if(!lbl_80563598 || !(reinterpret_cast<unsigned int *>(lbl_80563598)[0x24/4]&4)) fn_8010D5E4();
 return lbl_80563598;
}
}
#pragma pop
