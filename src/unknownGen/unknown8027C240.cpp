#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8027AB4C(void *,void *);
}
extern "C" {
void fn_8027C240(int p0){
 void *value0=fn_8027AB4C((void *)p0,(reinterpret_cast<char *>((void *)p0)+32));
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+24)=value0;
}
}
#pragma pop
