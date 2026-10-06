#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void OSYieldThread(void *);
extern void *kSuccess__3Gap;
}
extern "C" {
void fn_8007822C(int p0){
 OSYieldThread((void *)p0);
 *reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+0)=kSuccess__3Gap;
}
}
#pragma pop
