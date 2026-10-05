#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_802E3B9C();
extern void *lbl_80535708;
}
extern "C" {
void *fn_802E3ADC(){
 if(!lbl_80535708 || !(reinterpret_cast<unsigned int *>(lbl_80535708)[0x24/4]&4)) fn_802E3B9C();
 return lbl_80535708;
}
}
#pragma pop
