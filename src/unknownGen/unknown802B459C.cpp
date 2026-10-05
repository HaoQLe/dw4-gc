#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_802B4674();
extern void *lbl_805345EC;
}
extern "C" {
void *fn_802B459C(){
 if(!lbl_805345EC || !(reinterpret_cast<unsigned int *>(lbl_805345EC)[0x24/4]&4)) fn_802B4674();
 return lbl_805345EC;
}
}
#pragma pop
