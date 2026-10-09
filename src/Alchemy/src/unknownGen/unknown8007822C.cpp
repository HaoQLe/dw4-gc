#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void OSYieldThread();
extern void *kSuccess__3Gap;
}
extern "C" {
void igGamecubeThread_virtual74(int p0){
 OSYieldThread();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+0)=kSuccess__3Gap;
}
}
#pragma pop
