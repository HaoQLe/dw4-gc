#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80326074();
extern void *lbl_80535CCC;
}
extern "C" {
void *fn_80325ED8(){
 if(!lbl_80535CCC || !(reinterpret_cast<unsigned int *>(lbl_80535CCC)[0x24/4]&4)) fn_80326074();
 return lbl_80535CCC;
}
}
#pragma pop
