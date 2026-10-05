#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80039D6C();
extern void *lbl_80561FB0;
}
extern "C" {
void *fn_80039C84(){
 if(!lbl_80561FB0 || !(reinterpret_cast<unsigned int *>(lbl_80561FB0)[0x24/4]&4)) fn_80039D6C();
 return lbl_80561FB0;
}
}
#pragma pop
