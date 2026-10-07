#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {

}
extern "C" {
void fn_8026E9B0(int p0,int p1){
 if((unsigned int)p1==0){
  return;
 }
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+32)=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p1)+24);
 if(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+32)){
  *reinterpret_cast<void * *>(reinterpret_cast<char *>(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+32))+28)=(void *)p0;
 }
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p1)+24)=(void *)p0;
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+28)=(void *)0;
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+20)=(void *)p1;
}
}
#pragma pop
