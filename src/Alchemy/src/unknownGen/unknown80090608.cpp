#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void calloc(void *,void *);
void fn_80092F6C(void *,void *);
}
extern "C" {
void fn_80090608(int p0,int p1,int p2,int p3,int p4,int p5){
 calloc((void *)p1,(void *)p2);
}
void fn_80090630(int p0,int p1,int p2,int p3,int p4,int p5){
 fn_80092F6C((void *)p1,(void *)p2);
}
}
#pragma pop
