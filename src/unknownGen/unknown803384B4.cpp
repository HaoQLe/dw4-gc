#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80338624();
extern void *lbl_80536158;
}
extern "C" {
void *fn_803384B4(){
 if(!lbl_80536158 || !(reinterpret_cast<unsigned int *>(lbl_80536158)[0x24/4]&4)) fn_80338624();
 return lbl_80536158;
}
}
#pragma pop
