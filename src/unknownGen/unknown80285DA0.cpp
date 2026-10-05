#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80285DEC();
extern void *lbl_80515CC8;
}
extern "C" {
void *fn_80285DA0(){
 if(!lbl_80515CC8 || !(reinterpret_cast<unsigned int *>(lbl_80515CC8)[0x24/4]&4)) fn_80285DEC();
 return lbl_80515CC8;
}
}
#pragma pop
