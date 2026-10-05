#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8033A15C();
extern void *lbl_805361F0;
}
extern "C" {
void *fn_80339FEC(){
 if(!lbl_805361F0 || !(reinterpret_cast<unsigned int *>(lbl_805361F0)[0x24/4]&4)) fn_8033A15C();
 return lbl_805361F0;
}
}
#pragma pop
