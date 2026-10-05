#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8034019C();
extern void *lbl_80536604;
}
extern "C" {
void *fn_80340150(){
 if(!lbl_80536604 || !(reinterpret_cast<unsigned int *>(lbl_80536604)[0x24/4]&4)) fn_8034019C();
 return lbl_80536604;
}
}
#pragma pop
