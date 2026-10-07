#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80342FAC(void *);
}
extern "C" {
void *fn_8037870C(int p0,int p1){
 void *value0=fn_80342FAC(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p1)+0));
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+0)=value0;
 return (void *)p0;
}
}
#pragma pop
