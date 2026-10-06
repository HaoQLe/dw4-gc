#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_800667CC();
extern void *lbl_8055DCC0;
}
extern "C" {
void fn_80084FD0(int p0){
 fn_800667CC();
 *reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+192)=lbl_8055DCC0;
}
}
#pragma pop
