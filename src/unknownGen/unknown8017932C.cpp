#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80179220(void *);
}
extern "C" {
void fn_8017932C(int p0){
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+12)=(reinterpret_cast<char *>(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+12))+1);
 fn_80179220((void *)p0);
}
}
#pragma pop
