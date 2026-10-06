#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_800667CC();
void fn_800667D0();
}
extern "C" {
void fn_80182AB8(){return fn_800667D0();}
void fn_80182AD8(int p0){
 fn_800667CC();
 *reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+8)=(void *)p0;
}
}
#pragma pop
