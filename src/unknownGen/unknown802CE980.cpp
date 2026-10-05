#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_802CEA40();
extern void *lbl_80535000;
}
extern "C" {
void *fn_802CE980(){
 if(!lbl_80535000 || !(reinterpret_cast<unsigned int *>(lbl_80535000)[0x24/4]&4)) fn_802CEA40();
 return lbl_80535000;
}
}
#pragma pop
