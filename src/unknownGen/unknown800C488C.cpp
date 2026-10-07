#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_800F8214(void *,void *,void *);
}
extern "C" {
void fn_800C488C(int p0,int p1){
 fn_800F8214((void *)p1,*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+16),(void *)(int)*reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p0)+12));
}
}
#pragma pop
