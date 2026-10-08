#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80069128(void *,void *,void *);
}
extern "C" {
void *fn_80181F64(int p0,int p1,int p2,int p3,int p4,int p5){
 if((unsigned int)p0==(unsigned int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p2)+0)){
  return (void *)0;
 } else {
  if((unsigned int)p0!=0){
   fn_80069128(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p2)+8),(void *)p0,(void *)p2);
  }
  return (void *)1;
 }
}
}
#pragma pop
