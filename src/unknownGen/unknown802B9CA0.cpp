#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_802B9E44();
extern void *lbl_805347A8;
}
extern "C" {
void *fn_802B9CA0(){
 if(!lbl_805347A8 || !(reinterpret_cast<unsigned int *>(lbl_805347A8)[0x24/4]&4)) fn_802B9E44();
 return lbl_805347A8;
}
}
#pragma pop
