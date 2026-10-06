#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80053FF4(void *,int);
}
extern "C" {
void fn_80072FC0(int p0){
 fn_80053FF4(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+8),1);
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+8)=(void *)0;
}
}
#pragma pop
