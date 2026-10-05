#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_802CA57C();
extern void *lbl_80534E70;
}
extern "C" {
void *fn_802CA33C(){
 if(!lbl_80534E70 || !(reinterpret_cast<unsigned int *>(lbl_80534E70)[0x24/4]&4)) fn_802CA57C();
 return lbl_80534E70;
}
}
#pragma pop
