#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80128CF4(void *,void *);
}
extern "C" {
void fn_80306DE8(int p0,int p1,int p2){
 fn_80128CF4((void *)p0,(void *)(int)((int)*reinterpret_cast<void **>(reinterpret_cast<char *>(*reinterpret_cast<void **>(reinterpret_cast<char *>(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p1)+16))+36))+16)+(p2<<6)));
}
}
#pragma pop
