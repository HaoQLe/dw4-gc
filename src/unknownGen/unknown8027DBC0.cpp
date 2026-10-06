#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_802769E8(void *,void *,int);
void fn_8027D9F4(void *,void *);
}
extern "C" {
void fn_8027DBC0(int p0,int p1){
 fn_8027D9F4((void *)p0,(void *)p1);
 fn_802769E8(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+40),(void *)p1,0);
}
}
#pragma pop
