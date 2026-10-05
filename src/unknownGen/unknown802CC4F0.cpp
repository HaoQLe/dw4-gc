#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_802CC5D8();
extern void *lbl_80534F30;
}
extern "C" {
void *fn_802CC4F0(){
 if(!lbl_80534F30 || !(reinterpret_cast<unsigned int *>(lbl_80534F30)[0x24/4]&4)) fn_802CC5D8();
 return lbl_80534F30;
}
}
#pragma pop
