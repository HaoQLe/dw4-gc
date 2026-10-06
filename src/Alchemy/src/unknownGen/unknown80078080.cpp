#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void OSResumeThread(void *);
}
extern "C" {
void fn_80078080(int p0){
 OSResumeThread(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+36));
}
}
#pragma pop
