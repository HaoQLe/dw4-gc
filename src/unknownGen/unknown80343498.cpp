#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_803434E4();
extern void *lbl_8053675C;
}
extern "C" {
void *fn_80343498(){
 if(!lbl_8053675C || !(reinterpret_cast<unsigned int *>(lbl_8053675C)[0x24/4]&4)) fn_803434E4();
 return lbl_8053675C;
}
}
#pragma pop
