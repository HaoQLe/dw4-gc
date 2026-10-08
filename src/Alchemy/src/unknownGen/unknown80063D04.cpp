#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80063C74(void *);
void memcpy(void *,void *,void *);
}
extern "C" {
void fn_80063D04(int p0,int p1){
 fn_80063C74((void *)p0);
 if((unsigned int)p1!=0){
  memcpy(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+32),(void *)p1,(void *)(int)*reinterpret_cast<unsigned short *>(reinterpret_cast<char *>((void *)p0)+20));
  return;
 } else {
  return;
 }
}
}
#pragma pop
