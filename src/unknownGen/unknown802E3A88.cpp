#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void fn_802E3B9C();
extern void *lbl_80535708;
extern void *lbl_805621F4;
}
extern "C" {
void *fn_802E3A88(){
 if(!lbl_80535708) lbl_80535708=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80535708;
}
void *fn_802E3ADC(){
 if(!lbl_80535708 || !(reinterpret_cast<unsigned int *>(lbl_80535708)[0x24/4]&4)) fn_802E3B9C();
 return lbl_80535708;
}
}
#pragma pop
