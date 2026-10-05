#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_802D1AB4();
extern void *lbl_80535100;
}
extern "C" {
void *fn_802D18D0(){
 if(!lbl_80535100 || !(reinterpret_cast<unsigned int *>(lbl_80535100)[0x24/4]&4)) fn_802D1AB4();
 return lbl_80535100;
}
}
#pragma pop
