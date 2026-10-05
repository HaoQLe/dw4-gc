#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80033080();
extern void *lbl_80561D14;
}
extern "C" {
void *fn_80032F0C(){
 if(!lbl_80561D14 || !(reinterpret_cast<unsigned int *>(lbl_80561D14)[0x24/4]&4)) fn_80033080();
 return lbl_80561D14;
}
}
#pragma pop
