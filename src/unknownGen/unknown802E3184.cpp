#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_802E325C();
extern void *lbl_805356AC;
}
extern "C" {
void *fn_802E3184(){
 if(!lbl_805356AC || !(reinterpret_cast<unsigned int *>(lbl_805356AC)[0x24/4]&4)) fn_802E325C();
 return lbl_805356AC;
}
}
#pragma pop
