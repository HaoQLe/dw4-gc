#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_800593F4(void *);
}
extern "C" {
void fn_8008881C(int p0){
 void *local0;
 fn_800593F4(&local0);
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+0)=local0;
}
void fn_80088854(int p0){
 if(!*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+116)){
  return;
 }
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+132)=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+116);
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p0)+136)=1;
}
}
#pragma pop
