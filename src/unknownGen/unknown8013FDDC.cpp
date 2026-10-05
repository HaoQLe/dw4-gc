#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8013FEE4();
extern void *lbl_80563FBC;
}
extern "C" {
void *fn_8013FDDC(){
 if(!lbl_80563FBC || !(reinterpret_cast<unsigned int *>(lbl_80563FBC)[0x24/4]&4)) fn_8013FEE4();
 return lbl_80563FBC;
}
}
#pragma pop
