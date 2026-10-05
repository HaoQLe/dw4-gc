#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80285AFC();
extern void *lbl_80515CC0;
}
extern "C" {
void *fn_80285AB0(){
 if(!lbl_80515CC0 || !(reinterpret_cast<unsigned int *>(lbl_80515CC0)[0x24/4]&4)) fn_80285AFC();
 return lbl_80515CC0;
}
}
#pragma pop
