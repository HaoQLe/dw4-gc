#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8013F28C();
extern void *lbl_80563F94;
}
extern "C" {
void *fn_8013F184(){
 if(!lbl_80563F94 || !(reinterpret_cast<unsigned int *>(lbl_80563F94)[0x24/4]&4)) fn_8013F28C();
 return lbl_80563F94;
}
}
#pragma pop
