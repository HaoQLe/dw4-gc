#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void OSResumeThread(void *);
void OSSuspendThread(void *);
extern void *kFailure__3Gap;
extern void *kSuccess__3Gap;
}
extern "C" {
void igGamecubeThread_virtual6C(int p0,int p1){
 OSResumeThread((reinterpret_cast<char *>((void *)p1)+56));
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+0)=kSuccess__3Gap;
}
void igGamecubeThread_virtualB8(int p0,int p1){
 OSSuspendThread((reinterpret_cast<char *>((void *)p1)+56));
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+0)=kSuccess__3Gap;
}
void igGamecubeThread_virtualC0(int p0,int p1){
 OSResumeThread((reinterpret_cast<char *>((void *)p1)+56));
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+0)=kSuccess__3Gap;
}
void *igGamecubeThread_virtualC8(int p0){
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+0)=kFailure__3Gap;
 return (void *)p0;
}
}
#pragma pop
