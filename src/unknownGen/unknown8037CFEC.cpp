#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_803404A4(void *);
void *fn_803409B0(void *);
}
extern "C" {
void *fn_8037CFEC(int p0,int p1){
 void *value0=fn_803409B0(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p1)+0));
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+0)=value0;
 return (void *)p0;
}
void *fn_8037D024(int p0,int p1){
 void *value0=fn_803404A4(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p1)+0));
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+0)=value0;
 return (void *)p0;
}
}
#pragma pop
