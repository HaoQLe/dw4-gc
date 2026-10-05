#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_802D13FC();
extern void *lbl_805350D0;
}
extern "C" {
void *fn_802D1218(){
 if(!lbl_805350D0 || !(reinterpret_cast<unsigned int *>(lbl_805350D0)[0x24/4]&4)) fn_802D13FC();
 return lbl_805350D0;
}
}
#pragma pop
