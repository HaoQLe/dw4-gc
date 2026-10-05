#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_802D9128();
extern void *lbl_80535338;
}
extern "C" {
void *fn_802D9068(){
 if(!lbl_80535338 || !(reinterpret_cast<unsigned int *>(lbl_80535338)[0x24/4]&4)) fn_802D9128();
 return lbl_80535338;
}
}
#pragma pop
