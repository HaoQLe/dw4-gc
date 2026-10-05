#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_801BEEF0();
extern void *lbl_80564EB0;
}
extern "C" {
void *fn_801BEE2C(){
 if(!lbl_80564EB0 || !(reinterpret_cast<unsigned int *>(lbl_80564EB0)[0x24/4]&4)) fn_801BEEF0();
 return lbl_80564EB0;
}
}
#pragma pop
