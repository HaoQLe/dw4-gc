#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8014015C();
extern void *lbl_80563FC4;
}
extern "C" {
void *fn_80140054(){
 if(!lbl_80563FC4 || !(reinterpret_cast<unsigned int *>(lbl_80563FC4)[0x24/4]&4)) fn_8014015C();
 return lbl_80563FC4;
}
}
#pragma pop
