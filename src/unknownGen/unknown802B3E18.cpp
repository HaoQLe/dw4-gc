#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_802B3ED8();
extern void *lbl_80534574;
}
extern "C" {
void *fn_802B3E18(){
 if(!lbl_80534574 || !(reinterpret_cast<unsigned int *>(lbl_80534574)[0x24/4]&4)) fn_802B3ED8();
 return lbl_80534574;
}
}
#pragma pop
