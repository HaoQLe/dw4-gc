#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_801516EC();
extern void *lbl_80564504;
}
extern "C" {
void *fn_80151580(){
 if(!lbl_80564504 || !(reinterpret_cast<unsigned int *>(lbl_80564504)[0x24/4]&4)) fn_801516EC();
 return lbl_80564504;
}
}
#pragma pop
