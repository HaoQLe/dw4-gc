#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8013F014();
extern void *lbl_80563F8C;
}
extern "C" {
void *fn_8013EF0C(){
 if(!lbl_80563F8C || !(reinterpret_cast<unsigned int *>(lbl_80563F8C)[0x24/4]&4)) fn_8013F014();
 return lbl_80563F8C;
}
}
#pragma pop
