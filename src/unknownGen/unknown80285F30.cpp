#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_802862A0();
extern void *lbl_80515CCC;
}
extern "C" {
void *fn_80285F30(){
 if(!lbl_80515CCC || !(reinterpret_cast<unsigned int *>(lbl_80515CCC)[0x24/4]&4)) fn_802862A0();
 return lbl_80515CCC;
}
}
#pragma pop
