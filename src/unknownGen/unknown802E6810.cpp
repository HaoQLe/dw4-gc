#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_802E6940();
extern void *lbl_805357FC;
}
extern "C" {
void *fn_802E6810(){
 if(!lbl_805357FC || !(reinterpret_cast<unsigned int *>(lbl_805357FC)[0x24/4]&4)) fn_802E6940();
 return lbl_805357FC;
}
}
#pragma pop
