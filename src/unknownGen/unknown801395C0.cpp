#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_801396DC();
extern void *lbl_80563DF4;
}
extern "C" {
void *fn_801395C0(){
 if(!lbl_80563DF4 || !(reinterpret_cast<unsigned int *>(lbl_80563DF4)[0x24/4]&4)) fn_801396DC();
 return lbl_80563DF4;
}
}
#pragma pop
