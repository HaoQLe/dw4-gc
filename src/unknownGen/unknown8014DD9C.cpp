#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8014DF58();
extern void *lbl_8056441C;
}
extern "C" {
void *fn_8014DD9C(){
 if(!lbl_8056441C || !(reinterpret_cast<unsigned int *>(lbl_8056441C)[0x24/4]&4)) fn_8014DF58();
 return lbl_8056441C;
}
}
#pragma pop
