#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_803403E8();
extern void *lbl_8053661C;
}
extern "C" {
void *fn_80340328(){
 if(!lbl_8053661C || !(reinterpret_cast<unsigned int *>(lbl_8053661C)[0x24/4]&4)) fn_803403E8();
 return lbl_8053661C;
}
}
#pragma pop
