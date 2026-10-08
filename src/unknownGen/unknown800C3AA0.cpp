#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_800FF8F8(void *,void *,void *,void *);
}
extern "C" {
void fn_800C3AA0(int p0,int p1){
 fn_800FF8F8((void *)p1,*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+20),*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+12),*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+16));
}
}
#pragma pop
