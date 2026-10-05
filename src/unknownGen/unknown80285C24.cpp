#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80285CE4();
extern void *lbl_80515CC4;
}
extern "C" {
void *fn_80285C24(){
 if(!lbl_80515CC4 || !(reinterpret_cast<unsigned int *>(lbl_80515CC4)[0x24/4]&4)) fn_80285CE4();
 return lbl_80515CC4;
}
}
#pragma pop
