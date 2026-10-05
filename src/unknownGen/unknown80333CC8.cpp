#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80333D14();
extern void *lbl_80535F9C;
}
extern "C" {
void *fn_80333CC8(){
 if(!lbl_80535F9C || !(reinterpret_cast<unsigned int *>(lbl_80535F9C)[0x24/4]&4)) fn_80333D14();
 return lbl_80535F9C;
}
}
#pragma pop
