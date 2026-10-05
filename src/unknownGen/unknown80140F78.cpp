#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8014112C();
extern void *lbl_80564028;
}
extern "C" {
void *fn_80140F78(){
 if(!lbl_80564028 || !(reinterpret_cast<unsigned int *>(lbl_80564028)[0x24/4]&4)) fn_8014112C();
 return lbl_80564028;
}
}
#pragma pop
