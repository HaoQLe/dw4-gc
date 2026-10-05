#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_802BC374();
extern void *lbl_8053483C;
}
extern "C" {
void *fn_802BC28C(){
 if(!lbl_8053483C || !(reinterpret_cast<unsigned int *>(lbl_8053483C)[0x24/4]&4)) fn_802BC374();
 return lbl_8053483C;
}
}
#pragma pop
