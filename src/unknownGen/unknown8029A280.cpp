#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80290000(void *,int);
}
extern "C" {
void fn_8029A280(int p0,int p1){
 void *value0;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p0)+152)=(unsigned char)(int)(void *)p1;
 value0=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+4);
 if(value0){
  fn_80290000(value0,(int)(int)((void *)p1));
  return;
 } else {
  return;
 }
}
void fn_8029A2B0(void *object,int value){*reinterpret_cast<int *>(reinterpret_cast<char *>(object)+136)=value;}
}
#pragma pop
