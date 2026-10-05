#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8028CB84();
extern void *lbl_805660BC;
}
extern "C" {
void *fn_8028C970(){
 if(!lbl_805660BC || !(reinterpret_cast<unsigned int *>(lbl_805660BC)[0x24/4]&4)) fn_8028CB84();
 return lbl_805660BC;
}
}
#pragma pop
