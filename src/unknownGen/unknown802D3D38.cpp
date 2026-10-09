#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_802D403C();
extern void *lbl_80535174;
}
extern "C" {
void *beLOA_getMeta(){
 if(!lbl_80535174 || !(reinterpret_cast<unsigned int *>(lbl_80535174)[0x24/4]&4)) fn_802D403C();
 return lbl_80535174;
}
}
#pragma pop
