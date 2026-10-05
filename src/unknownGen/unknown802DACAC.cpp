#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_802DAD40();
extern void *lbl_805353D8;
}
extern "C" {
void *fn_802DACAC(){
 if(!lbl_805353D8 || !(reinterpret_cast<unsigned int *>(lbl_805353D8)[0x24/4]&4)) fn_802DAD40();
 return lbl_805353D8;
}
}
#pragma pop
