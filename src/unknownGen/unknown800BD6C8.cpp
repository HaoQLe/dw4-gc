#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_800ED404(void *,void *,void *);
}
extern "C" {
int fn_800BD6C8(){return 1;}
void fn_800BD6D0(int p0,int p1){
 fn_800ED404((void *)p1,*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+16),*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+12));
}
void fn_800BD700(){}
void fn_800BD704(int p0,int p1){
 fn_800ED404((void *)p1,*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+20),*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+12));
}
void fn_800BD734(){}
}
#pragma pop
