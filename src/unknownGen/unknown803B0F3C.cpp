#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_803B0AB4(void *,void *,void *);
void fn_803B0F20(void *,void *,void *);
}
extern "C" {
void fn_803B0F3C(int p0,int p1,int p2,int p3){
 fn_803B0AB4((void *)p0,(void *)p2,(void *)p3);
 fn_803B0F20((void *)p0,(void *)p1,*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+20));
}
}
#pragma pop
