#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_802C012C();
extern void *lbl_805349F0;
}
extern "C" {
void *fn_802C0098(){
 if(!lbl_805349F0 || !(reinterpret_cast<unsigned int *>(lbl_805349F0)[0x24/4]&4)) fn_802C012C();
 return lbl_805349F0;
}
}
#pragma pop
