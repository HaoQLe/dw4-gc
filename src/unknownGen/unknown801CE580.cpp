#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_801CEBB4();
extern void *lbl_805655D8;
}
extern "C" {
void *fn_801CE580(){
 if(!lbl_805655D8 || !(reinterpret_cast<unsigned int *>(lbl_805655D8)[0x24/4]&4)) fn_801CEBB4();
 return lbl_805655D8;
}
}
#pragma pop
