#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_802CC034();
extern void *lbl_80534F20;
}
extern "C" {
void *fn_802CBF4C(){
 if(!lbl_80534F20 || !(reinterpret_cast<unsigned int *>(lbl_80534F20)[0x24/4]&4)) fn_802CC034();
 return lbl_80534F20;
}
}
#pragma pop
