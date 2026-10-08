#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
float fn_80274214(void *,int);
void srand(void *);
}
extern "C" {
void *fn_8027BBDC(int p0,int p1,int p2,int p3,int p4,int p5){
 float value0=fn_80274214((void *)p0,1);
 srand((void *)(int)value0);
 return (void *)0;
}
}
#pragma pop
