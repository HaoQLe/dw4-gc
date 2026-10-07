#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {

}
extern "C" {
void fn_8029963C(int p0,int p1){
 if((int)p1>=0){
  *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+48)=(void *)p1;
  return;
 }
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+48)=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+20);
}
void *fn_80299658(int p0,int p1,int p2){
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+56)=(void *)p1;
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+60)=(void *)p2;
 return (void *)p0;
}
}
#pragma pop
