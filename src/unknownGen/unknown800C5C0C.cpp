#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80100094(void *,void *,void *);
void *fn_801000D0(void *,void *);
}
extern "C" {
void fn_800C5C0C(int p0,int p1){
 fn_80100094((void *)p1,(void *)(int)*reinterpret_cast<short *>(reinterpret_cast<char *>((void *)p0)+16),*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+12));
}
void fn_800C5C3C(int p0,int p1){
 void *value0=fn_801000D0((void *)p1,(void *)(int)*reinterpret_cast<short *>(reinterpret_cast<char *>((void *)p0)+16));
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+12)=value0;
}
}
#pragma pop
