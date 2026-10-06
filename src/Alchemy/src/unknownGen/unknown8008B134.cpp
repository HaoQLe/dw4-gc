#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_800667CC();
extern void *lbl_8055DDB0;
}
extern "C" {
void fn_8008B134(int p0){
 fn_800667CC();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+156)=lbl_8055DDB0;
}
}
#pragma pop
