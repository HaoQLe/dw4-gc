#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_802BBD84();
extern void *lbl_80534828;
}
extern "C" {
void *fn_802BBBE8(){
 if(!lbl_80534828 || !(reinterpret_cast<unsigned int *>(lbl_80534828)[0x24/4]&4)) fn_802BBD84();
 return lbl_80534828;
}
}
#pragma pop
