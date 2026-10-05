#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_802E133C();
extern void *lbl_805355D8;
}
extern "C" {
void *fn_802E11E0(){
 if(!lbl_805355D8 || !(reinterpret_cast<unsigned int *>(lbl_805355D8)[0x24/4]&4)) fn_802E133C();
 return lbl_805355D8;
}
}
#pragma pop
