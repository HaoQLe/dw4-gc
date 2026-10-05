#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_802D48D4();
extern void *lbl_805351AC;
}
extern "C" {
void *fn_802D4698(){
 if(!lbl_805351AC || !(reinterpret_cast<unsigned int *>(lbl_805351AC)[0x24/4]&4)) fn_802D48D4();
 return lbl_805351AC;
}
}
#pragma pop
