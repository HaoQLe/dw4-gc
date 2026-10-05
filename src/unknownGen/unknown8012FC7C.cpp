#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8012FDF8();
extern void *lbl_80563A9C;
}
extern "C" {
void *fn_8012FC7C(){
 if(!lbl_80563A9C || !(reinterpret_cast<unsigned int *>(lbl_80563A9C)[0x24/4]&4)) fn_8012FDF8();
 return lbl_80563A9C;
}
}
#pragma pop
