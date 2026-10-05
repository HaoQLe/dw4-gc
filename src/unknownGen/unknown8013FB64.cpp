#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8013FC6C();
extern void *lbl_80563FB4;
}
extern "C" {
void *fn_8013FB64(){
 if(!lbl_80563FB4 || !(reinterpret_cast<unsigned int *>(lbl_80563FB4)[0x24/4]&4)) fn_8013FC6C();
 return lbl_80563FB4;
}
}
#pragma pop
