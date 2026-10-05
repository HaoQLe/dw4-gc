#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_802856E4();
extern void *lbl_80515CAC;
}
extern "C" {
void *fn_80285698(){
 if(!lbl_80515CAC || !(reinterpret_cast<unsigned int *>(lbl_80515CAC)[0x24/4]&4)) fn_802856E4();
 return lbl_80515CAC;
}
}
#pragma pop
