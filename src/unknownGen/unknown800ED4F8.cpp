#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8012E1D8(void *,int);
}
extern "C" {
void fn_800ED4F8(int p0,int p1){
 void *value0=fn_8012E1D8((void *)p1,1);
 *reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+1092)=value0;
}
void fn_800ED530(void *object,int value){*reinterpret_cast<int *>(reinterpret_cast<char *>(object)+1092)=value;}
}
#pragma pop
