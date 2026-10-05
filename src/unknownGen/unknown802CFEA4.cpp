#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_802CFFC0();
extern void *lbl_80535080;
}
extern "C" {
void *fn_802CFEA4(){
 if(!lbl_80535080 || !(reinterpret_cast<unsigned int *>(lbl_80535080)[0x24/4]&4)) fn_802CFFC0();
 return lbl_80535080;
}
}
#pragma pop
