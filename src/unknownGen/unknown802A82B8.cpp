#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_802A6A54();
}
extern "C" {
void *fn_802A82B8(){return fn_802A6A54();}
void *fn_802A82D8(int p0){
 if((unsigned int)p0==0){
  return (void *)0;
 }
 return *reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+8);
}
void *fn_802A82F0(int p0){
 if((unsigned int)p0==0){
  return (void *)0;
 }
 return *reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+4);
}
void fn_802A8308(int p0){
 if((unsigned int)p0==0){
  return;
 }
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+0)=(void *)0;
}
}
#pragma pop
