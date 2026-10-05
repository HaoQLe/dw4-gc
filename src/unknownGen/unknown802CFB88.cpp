#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_802CFC84();
extern void *lbl_80535068;
}
extern "C" {
void *fn_802CFB88(){
 if(!lbl_80535068 || !(reinterpret_cast<unsigned int *>(lbl_80535068)[0x24/4]&4)) fn_802CFC84();
 return lbl_80535068;
}
}
#pragma pop
