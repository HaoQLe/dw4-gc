#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_801BA458();
extern void *lbl_80564D20;
}
extern "C" {
void *fn_801B9FB8(){
 if(!lbl_80564D20 || !(reinterpret_cast<unsigned int *>(lbl_80564D20)[0x24/4]&4)) fn_801BA458();
 return lbl_80564D20;
}
}
#pragma pop
