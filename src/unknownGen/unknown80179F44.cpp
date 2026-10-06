#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80179EB0(void *,void *);
}
extern "C" {
void *fn_80179F44(int p0,int p1){
 void *value0=fn_80179EB0((void *)p0,(void *)p1);
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(value0)+8);
}
}
#pragma pop
