#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_800667D4(void *);
void fn_80068390(void *,void *);
void fn_800E3274(void *);
void fn_800FC1FC(void *,void *);
}
extern "C" {
void igGamecubeVertexArray1_1_virtual30(int p0){
 void *value0;
 if(((unsigned int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+20)&0x4)){
  fn_800FC1FC(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+72),*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+76));
 }
 value0=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+8);
 if(value0){
  fn_800E3274((void *)p0);
  fn_80068390((void *)p0,*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+8));
  *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+8)=(void *)0;
  *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+12)=(void *)0;
 }
 fn_800667D4((void *)p0);
}
}
#pragma pop
