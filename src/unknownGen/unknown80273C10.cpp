#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80278448(void *,void *,void *);
}
extern "C" {
void fn_80273C10(int p0,int p1,int p2){
 fn_80278448((void *)p0,(void *)(int)((int)*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+0)-((p1+1)<<4)),(void *)p2);
}
}
#pragma pop
