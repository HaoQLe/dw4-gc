#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_800FE744(void *,void *);
}
extern "C" {
void *fn_800FEFA4(int p0,int p1,int p2,int p3,int p4,int p5){
 if(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)(int)((int)*reinterpret_cast<void **>(reinterpret_cast<char *>(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+324))+16)+(p1*164)))+136)){
  fn_800FE744((void *)p0,(void *)(int)((int)*reinterpret_cast<void **>(reinterpret_cast<char *>(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+324))+16)+(p1*164)));
 }
 return (void *)1;
}
}
#pragma pop
