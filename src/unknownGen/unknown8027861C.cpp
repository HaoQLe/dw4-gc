#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80278448(void *,void *,void *);
}
extern "C" {
void fn_8027861C(int p0,int p1,int p2,int p3,int p4,int p5){
 fn_80278448((void *)p0,*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p1)+0),*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p1)+4));
}
}
#pragma pop
