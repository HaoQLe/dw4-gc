#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_800667CC();
}
extern "C" {
void fn_80177F30(){}
void fn_80177F34(int p0){
 fn_800667CC();
 *reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+12)=(void *)p0;
}
}
#pragma pop
