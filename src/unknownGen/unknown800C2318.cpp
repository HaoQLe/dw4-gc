#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_800F8590(void *,int,void *);
}
extern "C" {
void fn_800C2318(void *object,int value){*reinterpret_cast<int *>(reinterpret_cast<char *>(object)+12)=value;}
void fn_800C2320(int p0,int p1){
 fn_800F8590((void *)p1,0,(reinterpret_cast<char *>((void *)p0)+12));
}
}
#pragma pop
