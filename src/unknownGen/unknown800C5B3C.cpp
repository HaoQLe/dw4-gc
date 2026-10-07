#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8010012C(void *,void *,void *);
void *fn_8010018C(void *,void *);
}
extern "C" {
void fn_800C5B3C(int p0,int p1){
 fn_8010012C((void *)p1,(void *)(int)*reinterpret_cast<short *>(reinterpret_cast<char *>((void *)p0)+16),*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+12));
}
void fn_800C5B6C(int p0,int p1){
 void *value0=fn_8010018C((void *)p1,(void *)(int)*reinterpret_cast<short *>(reinterpret_cast<char *>((void *)p0)+16));
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+12)=value0;
}
}
#pragma pop
