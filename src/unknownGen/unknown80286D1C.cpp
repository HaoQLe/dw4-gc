#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80286DDC();
extern void *lbl_80515D34;
}
extern "C" {
void *fn_80286D1C(){
 if(!lbl_80515D34 || !(reinterpret_cast<unsigned int *>(lbl_80515D34)[0x24/4]&4)) fn_80286DDC();
 return lbl_80515D34;
}
}
#pragma pop
