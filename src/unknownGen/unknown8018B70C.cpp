#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void memcpy(void *,void *,int);
}
extern "C" {
void *fn_8018B70C(int p0,int p1){
 memcpy(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+8),*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p1)+8),16);
 memcpy(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+12),*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p1)+12),16);
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+20)=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p1)+20);
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+16)=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p1)+16);
 return (void *)p0;
}
}
#pragma pop
