#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void fn_8014CB04();
extern void *lbl_805621F4;
extern void *lbl_805643A4;
}
extern "C" {
void *fn_8014C7E8(){
 if(!lbl_805643A4) lbl_805643A4=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_805643A4;
}
void *fn_8014C824(){
 if(!lbl_805643A4 || !(reinterpret_cast<unsigned int *>(lbl_805643A4)[0x24/4]&4)) fn_8014CB04();
 return lbl_805643A4;
}
}
#pragma pop
