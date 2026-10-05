#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80136CD4();
extern void *lbl_80563CF0;
}
extern "C" {
void *fn_80136B30(){
 if(!lbl_80563CF0 || !(reinterpret_cast<unsigned int *>(lbl_80563CF0)[0x24/4]&4)) fn_80136CD4();
 return lbl_80563CF0;
}
}
#pragma pop
