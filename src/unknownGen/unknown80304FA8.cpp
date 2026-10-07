#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {

}
extern "C" {
void fn_80304FA8(int p0,int p1){
 void *value0;
 if((unsigned char)p1){
  value0=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+12);
  *reinterpret_cast<long long *>(reinterpret_cast<char *>((void *)p0)+40)=*reinterpret_cast<long long *>(reinterpret_cast<char *>(value0)+80);
  return;
 }
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+44)=(void *)0;
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+40)=(void *)0;
}
}
#pragma pop
