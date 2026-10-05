#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80342B30();
extern void *lbl_8053673C;
}
extern "C" {
void *fn_80342A90(){
 if(!lbl_8053673C || !(reinterpret_cast<unsigned int *>(lbl_8053673C)[0x24/4]&4)) fn_80342B30();
 return lbl_8053673C;
}
}
#pragma pop
