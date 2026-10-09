#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80065A58(void *);
void fn_800667A4();
void fn_800667CC();
}
extern "C" {
void igParameterSet_virtual0C(){return fn_800667A4();}
void igParameterSet_virtual34(int p0,int p1){
 fn_800667CC();
 if((unsigned char)p1){
  *reinterpret_cast<void * *>(reinterpret_cast<char *>(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+8))+72)=(void *)1;
  fn_80065A58(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+8));
  return;
 } else {
  return;
 }
}
}
#pragma pop
