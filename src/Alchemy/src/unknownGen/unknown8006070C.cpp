#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
extern void *_arkCore__Q23Gap4Core;
void fn_80066DD8(void *,int);
void malloc(void *);
}
extern "C" {
void fn_8006070C(int p0,int p1,int p2,int p3,int p4,int p5){
 void *value0=_arkCore__Q23Gap4Core;
 if(*reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value0)+0)){
  fn_80066DD8((void *)p0,0);
  return;
 } else {
  malloc((void *)p0);
  return;
 }
}
}
#pragma pop
