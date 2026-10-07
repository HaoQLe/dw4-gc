#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_800F8F4C(void *,void *);
}
extern "C" {
void fn_800BCAD8(void *object,int value){*reinterpret_cast<int *>(reinterpret_cast<char *>(object)+12)=value;}
void fn_800BCAE0(int p0,int p1){
 fn_800F8F4C((void *)p1,(void *)(int)*reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p0)+12));
}
}
#pragma pop
