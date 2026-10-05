#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_801336D4();
extern void *lbl_80563BD8;
}
extern "C" {
void *fn_80133518(){
 if(!lbl_80563BD8 || !(reinterpret_cast<unsigned int *>(lbl_80563BD8)[0x24/4]&4)) fn_801336D4();
 return lbl_80563BD8;
}
}
#pragma pop
