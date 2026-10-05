#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_802E5B1C();
extern void *lbl_805357BC;
}
extern "C" {
void *fn_802E58D8(){
 if(!lbl_805357BC || !(reinterpret_cast<unsigned int *>(lbl_805357BC)[0x24/4]&4)) fn_802E5B1C();
 return lbl_805357BC;
}
}
#pragma pop
