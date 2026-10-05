#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_802D6E30();
extern void *lbl_80535280;
}
extern "C" {
void *fn_802D6C8C(){
 if(!lbl_80535280 || !(reinterpret_cast<unsigned int *>(lbl_80535280)[0x24/4]&4)) fn_802D6E30();
 return lbl_80535280;
}
}
#pragma pop
