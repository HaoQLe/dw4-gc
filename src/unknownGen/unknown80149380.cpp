#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_801494E8();
extern void *lbl_8056428C;
}
extern "C" {
void *fn_80149380(){
 if(!lbl_8056428C || !(reinterpret_cast<unsigned int *>(lbl_8056428C)[0x24/4]&4)) fn_801494E8();
 return lbl_8056428C;
}
}
#pragma pop
