#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_802BB050();
extern void *lbl_805347FC;
}
extern "C" {
void *fn_802BAF04(){
 if(!lbl_805347FC || !(reinterpret_cast<unsigned int *>(lbl_805347FC)[0x24/4]&4)) fn_802BB050();
 return lbl_805347FC;
}
}
#pragma pop
