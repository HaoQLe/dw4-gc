#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_802B6E34();
extern void *lbl_8053468C;
}
extern "C" {
void *fn_802B6D18(){
 if(!lbl_8053468C || !(reinterpret_cast<unsigned int *>(lbl_8053468C)[0x24/4]&4)) fn_802B6E34();
 return lbl_8053468C;
}
}
#pragma pop
