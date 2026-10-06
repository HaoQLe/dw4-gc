#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_801D42B0(void *,void *);
}
extern "C" {
void fn_801D4480(int p0,int p1){
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p1)+8)=(void *)0;
 fn_801D42B0((void *)p0,(void *)p1);
}
}
#pragma pop
