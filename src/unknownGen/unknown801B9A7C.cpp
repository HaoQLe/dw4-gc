#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_801B9E18();
extern void *lbl_80564D0C;
}
extern "C" {
void *fn_801B9A7C(){
 if(!lbl_80564D0C || !(reinterpret_cast<unsigned int *>(lbl_80564D0C)[0x24/4]&4)) fn_801B9E18();
 return lbl_80564D0C;
}
}
#pragma pop
