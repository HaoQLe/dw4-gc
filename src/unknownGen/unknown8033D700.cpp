#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8033D84C();
extern void *lbl_8053644C;
}
extern "C" {
void *fn_8033D700(){
 if(!lbl_8053644C || !(reinterpret_cast<unsigned int *>(lbl_8053644C)[0x24/4]&4)) fn_8033D84C();
 return lbl_8053644C;
}
}
#pragma pop
