#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_802DE224();
extern void *lbl_805354B8;
}
extern "C" {
void *fn_802DE040(){
 if(!lbl_805354B8 || !(reinterpret_cast<unsigned int *>(lbl_805354B8)[0x24/4]&4)) fn_802DE224();
 return lbl_805354B8;
}
}
#pragma pop
