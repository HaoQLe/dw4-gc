#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_802D8BC0();
extern void *lbl_80535310;
}
extern "C" {
void *beFontInfo_getMeta(){
 if(!lbl_80535310 || !(reinterpret_cast<unsigned int *>(lbl_80535310)[0x24/4]&4)) fn_802D8BC0();
 return lbl_80535310;
}
}
#pragma pop
