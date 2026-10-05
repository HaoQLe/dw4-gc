#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_802CC3B4();
extern void *lbl_80534F28;
}
extern "C" {
void *fn_802CC284(){
 if(!lbl_80534F28 || !(reinterpret_cast<unsigned int *>(lbl_80534F28)[0x24/4]&4)) fn_802CC3B4();
 return lbl_80534F28;
}
}
#pragma pop
