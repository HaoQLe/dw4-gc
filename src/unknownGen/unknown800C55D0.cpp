#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_800F8DF0(void *,void *);
}
extern "C" {
void fn_800C55D0(int p0,int p1){
 fn_800F8DF0((void *)p1,(void *)(int)*reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p0)+12));
}
}
#pragma pop
