#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_802CCBF8();
extern void *lbl_80534F40;
}
extern "C" {
void *fn_802CCAC8(){
 if(!lbl_80534F40 || !(reinterpret_cast<unsigned int *>(lbl_80534F40)[0x24/4]&4)) fn_802CCBF8();
 return lbl_80534F40;
}
}
#pragma pop
