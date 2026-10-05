#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80038E9C();
extern void *lbl_80561E5C;
}
extern "C" {
void *fn_80038D84(){
 if(!lbl_80561E5C || !(reinterpret_cast<unsigned int *>(lbl_80561E5C)[0x24/4]&4)) fn_80038E9C();
 return lbl_80561E5C;
}
}
#pragma pop
