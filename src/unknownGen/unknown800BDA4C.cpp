#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_800ED530(void *,int);
}
extern "C" {
void fn_800BDA4C(int p0,int p1){
 fn_800ED530((void *)p1,(int)(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+28)));
}
}
#pragma pop
