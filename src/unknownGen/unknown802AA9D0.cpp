#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_802AAA90();
extern void *lbl_80534354;
}
extern "C" {
void *fn_802AA9D0(){
 if(!lbl_80534354 || !(reinterpret_cast<unsigned int *>(lbl_80534354)[0x24/4]&4)) fn_802AAA90();
 return lbl_80534354;
}
}
#pragma pop
