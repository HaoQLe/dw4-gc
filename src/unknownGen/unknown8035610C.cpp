#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {

}
extern "C" {
void fn_8035610C(int p0,int p1,int p2){
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+16)=(void *)0;
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+28)=(void *)0;
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+24)=(void *)p2;
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+28)=(void *)0;
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+32)=(void *)p1;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p0)+36)=0;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p0)+37)=0;
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+60)=(void *)0;
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+72)=(void *)0;
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+68)=(void *)0;
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+64)=(void *)0;
 if((int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+32)!=1){
  if((int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+32)>=1){
   return;
  }
  if((int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+32)<0){
   return;
  }
  *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+20)=(void *)2;
  return;
 }
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+20)=(void *)3;
}
}
#pragma pop
