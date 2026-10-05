#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80405EF4();
extern void *lbl_8055C8D4;
}
extern "C" {
void *fn_80405D10(){
 if(!lbl_8055C8D4 || !(reinterpret_cast<unsigned int *>(lbl_8055C8D4)[0x24/4]&4)) fn_80405EF4();
 return lbl_8055C8D4;
}
}
#pragma pop
