#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80069128(void *,void *,void *);
}
extern "C" {
void fn_800CD9C0(int p0,int p1,int p2,int p3,int p4,int p5){
 fn_80069128(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+8),(void *)p1,(void *)p2);
}
}
#pragma pop
