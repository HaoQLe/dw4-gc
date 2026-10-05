#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_800396F8();
extern void *lbl_80561ED8;
}
extern "C" {
void *fn_80039610(){
 if(!lbl_80561ED8 || !(reinterpret_cast<unsigned int *>(lbl_80561ED8)[0x24/4]&4)) fn_800396F8();
 return lbl_80561ED8;
}
}
#pragma pop
