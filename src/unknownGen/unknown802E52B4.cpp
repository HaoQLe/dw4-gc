#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_802E5410();
extern void *lbl_80535760;
}
extern "C" {
void *fn_802E52B4(){
 if(!lbl_80535760 || !(reinterpret_cast<unsigned int *>(lbl_80535760)[0x24/4]&4)) fn_802E5410();
 return lbl_80535760;
}
}
#pragma pop
