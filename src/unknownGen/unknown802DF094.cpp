#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_802DF220();
extern void *lbl_80535514;
}
extern "C" {
void *fn_802DF094(){
 if(!lbl_80535514 || !(reinterpret_cast<unsigned int *>(lbl_80535514)[0x24/4]&4)) fn_802DF220();
 return lbl_80535514;
}
}
#pragma pop
