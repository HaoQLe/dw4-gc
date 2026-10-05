#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80134018();
extern void *lbl_80563C04;
}
extern "C" {
void *fn_80133E9C(){
 if(!lbl_80563C04 || !(reinterpret_cast<unsigned int *>(lbl_80563C04)[0x24/4]&4)) fn_80134018();
 return lbl_80563C04;
}
}
#pragma pop
