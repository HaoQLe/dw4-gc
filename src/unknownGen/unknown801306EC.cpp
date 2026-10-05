#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80130818();
extern void *lbl_80563ACC;
}
extern "C" {
void *fn_801306EC(){
 if(!lbl_80563ACC || !(reinterpret_cast<unsigned int *>(lbl_80563ACC)[0x24/4]&4)) fn_80130818();
 return lbl_80563ACC;
}
}
#pragma pop
