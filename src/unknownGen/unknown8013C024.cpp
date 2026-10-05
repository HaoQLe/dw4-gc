#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8013C12C();
extern void *lbl_80563EF4;
}
extern "C" {
void *fn_8013C024(){
 if(!lbl_80563EF4 || !(reinterpret_cast<unsigned int *>(lbl_80563EF4)[0x24/4]&4)) fn_8013C12C();
 return lbl_80563EF4;
}
}
#pragma pop
