#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80332E24();
extern void *lbl_80535F3C;
}
extern "C" {
void *fn_80332DD8(){
 if(!lbl_80535F3C || !(reinterpret_cast<unsigned int *>(lbl_80535F3C)[0x24/4]&4)) fn_80332E24();
 return lbl_80535F3C;
}
}
#pragma pop
