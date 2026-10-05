#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80325C44();
extern void *lbl_80535C80;
}
extern "C" {
void *fn_80325BF8(){
 if(!lbl_80535C80 || !(reinterpret_cast<unsigned int *>(lbl_80535C80)[0x24/4]&4)) fn_80325C44();
 return lbl_80535C80;
}
}
#pragma pop
