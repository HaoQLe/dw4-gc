#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8033B728();
extern void *lbl_80536234;
}
extern "C" {
void *fn_8033B5B8(){
 if(!lbl_80536234 || !(reinterpret_cast<unsigned int *>(lbl_80536234)[0x24/4]&4)) fn_8033B728();
 return lbl_80536234;
}
}
#pragma pop
