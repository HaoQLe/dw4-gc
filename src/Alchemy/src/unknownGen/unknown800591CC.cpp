#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8005920C();
extern void *kFailure__3Gap;
}
extern "C" {
void *fn_800591CC(int p0){
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+0)=kFailure__3Gap;
 return (void *)p0;
}
int fn_800591D8(){return 0;}
int fn_800591E0(){return -1;}
void *fn_800591E8(){return fn_8005920C();}
void fn_80059208(){}
}
#pragma pop
