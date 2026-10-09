#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_802BAE50();
extern void *lbl_805347F8;
}
extern "C" {
void *beSeInfo_getMeta(){
 if(!lbl_805347F8 || !(reinterpret_cast<unsigned int *>(lbl_805347F8)[0x24/4]&4)) fn_802BAE50();
 return lbl_805347F8;
}
}
#pragma pop
