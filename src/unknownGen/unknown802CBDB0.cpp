#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_802CBE98();
extern void *lbl_80534F1C;
}
extern "C" {
void *fn_802CBDB0(){
 if(!lbl_80534F1C || !(reinterpret_cast<unsigned int *>(lbl_80534F1C)[0x24/4]&4)) fn_802CBE98();
 return lbl_80534F1C;
}
}
#pragma pop
