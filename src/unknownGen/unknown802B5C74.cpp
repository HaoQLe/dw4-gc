#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_802B5D90();
extern void *lbl_8053464C;
}
extern "C" {
void *fn_802B5C74(){
 if(!lbl_8053464C || !(reinterpret_cast<unsigned int *>(lbl_8053464C)[0x24/4]&4)) fn_802B5D90();
 return lbl_8053464C;
}
}
#pragma pop
