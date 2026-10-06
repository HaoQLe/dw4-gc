#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80068060(void *,void *,int);
}
extern "C" {
void fn_8006B308(int p0,int p1){
 fn_80068060(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+8),*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p1)+8),1);
 fn_80068060(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+12),*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p1)+12),1);
}
}
#pragma pop
