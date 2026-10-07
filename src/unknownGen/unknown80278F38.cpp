#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80278D74(void *);
}
extern "C" {
void fn_80278F38(int p0,int p1){
 if((unsigned int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p1)+8)==(unsigned int)p1){
  if((int)*reinterpret_cast<short *>(reinterpret_cast<char *>((void *)p1)+12)==0){
   fn_80278D74(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p1)+0));
  }
  *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p1)+8)=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+4);
  *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+4)=(void *)p1;
  return;
 } else {
  return;
 }
}
}
#pragma pop
