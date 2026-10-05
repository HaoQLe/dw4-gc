#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_802D8EB0();
extern void *lbl_80535318;
}
extern "C" {
void *fn_802D8D24(){
 if(!lbl_80535318 || !(reinterpret_cast<unsigned int *>(lbl_80535318)[0x24/4]&4)) fn_802D8EB0();
 return lbl_80535318;
}
}
#pragma pop
