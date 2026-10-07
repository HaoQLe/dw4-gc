#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {

}
extern "C" {
void *fn_80295204(int p0,int p1,int p2){
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+140)=(void *)(int)((int)*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+140)+p2);
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+136)=(void *)(int)((int)*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+136)+p2);
 return (void *)p0;
}
void *fn_80295220(int p0,int p1,int p2,int p3){
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p1)+0)=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+140);
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p2)+0)=(void *)(int)((int)*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+64)-(int)*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+140));
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p3)+0)=(void *)(int)((int)*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+24)-(int)*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+136));
 return *reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+60);
}
}
#pragma pop
