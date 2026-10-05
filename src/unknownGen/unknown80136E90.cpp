#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80136FBC();
extern void *lbl_80563D10;
}
extern "C" {
void *fn_80136E90(){
 if(!lbl_80563D10 || !(reinterpret_cast<unsigned int *>(lbl_80563D10)[0x24/4]&4)) fn_80136FBC();
 return lbl_80563D10;
}
}
#pragma pop
