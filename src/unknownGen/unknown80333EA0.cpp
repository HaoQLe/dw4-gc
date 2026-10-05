#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80333EEC();
extern void *lbl_80535FAC;
}
extern "C" {
void *fn_80333EA0(){
 if(!lbl_80535FAC || !(reinterpret_cast<unsigned int *>(lbl_80535FAC)[0x24/4]&4)) fn_80333EEC();
 return lbl_80535FAC;
}
}
#pragma pop
