#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_800E1558(void *);
}
extern "C" {
void fn_8031A2D8(int p0){
 void *value0;
 fn_800E1558((void *)p0);
 value0=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+32);
 if(!value0){
  *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+32)=(void *)180;
 }
}
}
#pragma pop
