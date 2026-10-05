#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_802CCE10();
extern void *lbl_80534F4C;
}
extern "C" {
void *fn_802CCDC4(){
 if(!lbl_80534F4C || !(reinterpret_cast<unsigned int *>(lbl_80534F4C)[0x24/4]&4)) fn_802CCE10();
 return lbl_80534F4C;
}
}
#pragma pop
