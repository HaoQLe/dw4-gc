#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8003922C();
extern void *lbl_80561EAC;
}
extern "C" {
void *fn_80039144(){
 if(!lbl_80561EAC || !(reinterpret_cast<unsigned int *>(lbl_80561EAC)[0x24/4]&4)) fn_8003922C();
 return lbl_80561EAC;
}
}
#pragma pop
