#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_800A30E8(void *);
void *fn_8027327C(void *,int);
}
extern "C" {
void *fn_8026FFA8(int p0,int p1,int p2,int p3,int p4,int p5){
 void *value0=fn_8027327C((void *)p0,1);
 fn_800A30E8(value0);
 return (void *)0;
}
}
#pragma pop
