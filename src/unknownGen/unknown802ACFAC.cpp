#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_802AD0DC();
extern void *lbl_8053446C;
}
extern "C" {
void *fn_802ACFAC(){
 if(!lbl_8053446C || !(reinterpret_cast<unsigned int *>(lbl_8053446C)[0x24/4]&4)) fn_802AD0DC();
 return lbl_8053446C;
}
}
#pragma pop
