#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8013C3A4();
extern void *lbl_80563EFC;
}
extern "C" {
void *fn_8013C29C(){
 if(!lbl_80563EFC || !(reinterpret_cast<unsigned int *>(lbl_80563EFC)[0x24/4]&4)) fn_8013C3A4();
 return lbl_80563EFC;
}
}
#pragma pop
