#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
extern void *kSuccess__3Gap;
}
extern "C" {
void *fn_8008A568(int p0,int p1,int p2,int p3){
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p1)+132)=(void *)p3;
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p1)+128)=(void *)p2;
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+0)=kSuccess__3Gap;
 return (void *)p0;
}
}
#pragma pop
