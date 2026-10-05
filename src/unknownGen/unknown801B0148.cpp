#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_801B0354();
extern void *lbl_805648B8;
}
extern "C" {
void *fn_801B0148(){
 if(!lbl_805648B8 || !(reinterpret_cast<unsigned int *>(lbl_805648B8)[0x24/4]&4)) fn_801B0354();
 return lbl_805648B8;
}
}
#pragma pop
