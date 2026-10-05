#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8040992C();
extern void *lbl_8055CB6C;
}
extern "C" {
void *fn_80409844(){
 if(!lbl_8055CB6C || !(reinterpret_cast<unsigned int *>(lbl_8055CB6C)[0x24/4]&4)) fn_8040992C();
 return lbl_8055CB6C;
}
}
#pragma pop
