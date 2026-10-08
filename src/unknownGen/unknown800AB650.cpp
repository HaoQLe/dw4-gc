#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_800ABA98(void *);
}
extern "C" {
void fn_800AB650(int p0,int p1,int p2){
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+8)=(void *)p1;
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+12)=(void *)p2;
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+0)=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+8);
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+4)=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+8);
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+16)=(void *)0;
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+20)=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+12);
 fn_800ABA98((reinterpret_cast<char *>((void *)p0)+24));
}
}
#pragma pop
