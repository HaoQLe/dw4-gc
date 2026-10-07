#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void OSResumeThread(void *);
void OSSuspendThread(void *);
extern void *kSuccess__3Gap;
}
extern "C" {
void fn_80078410(int p0,int p1){
 OSResumeThread((reinterpret_cast<char *>((void *)p1)+56));
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+0)=kSuccess__3Gap;
}
void fn_80078448(int p0,int p1){
 OSSuspendThread((reinterpret_cast<char *>((void *)p1)+56));
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+0)=kSuccess__3Gap;
}
void fn_80078480(int p0,int p1){
 OSResumeThread((reinterpret_cast<char *>((void *)p1)+56));
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+0)=kSuccess__3Gap;
}
}
#pragma pop
