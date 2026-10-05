#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8003B0B8();
extern void *lbl_80562074;
}
extern "C" {
void *fn_8003AF84(){
 if(!lbl_80562074 || !(reinterpret_cast<unsigned int *>(lbl_80562074)[0x24/4]&4)) fn_8003B0B8();
 return lbl_80562074;
}
}
#pragma pop
