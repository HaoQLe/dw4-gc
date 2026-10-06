#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_800667D0();
}
extern "C" {
void fn_80100268(int p0){
 *reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+48)=(void *)1;
 fn_800667D0();
}
}
#pragma pop
