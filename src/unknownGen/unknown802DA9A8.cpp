#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_802DAB34();
extern void *lbl_805353CC;
}
extern "C" {
void *fn_802DA9A8(){
 if(!lbl_805353CC || !(reinterpret_cast<unsigned int *>(lbl_805353CC)[0x24/4]&4)) fn_802DAB34();
 return lbl_805353CC;
}
}
#pragma pop
